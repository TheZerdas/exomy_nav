import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import SetEnvironmentVariable, ExecuteProcess, DeclareLaunchArgument, LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PythonExpression
from nav2_common.launch import HasNodeParams
from launch.conditions import UnlessCondition

namespace_ = 'exomy'

def generate_launch_description():
    # Get paths to config files
    exomy_config = os.path.join(get_package_share_directory('exomy'),'exomy.yaml')
    sim_config = os.path.join(get_package_share_directory('exomy_sim'),'rviz/simulation2.rviz')
    world = os.path.join(get_package_share_directory('exomy_sim'), 'worlds/obstacles.world')
    depth_param_config = os.path.join(get_package_share_directory('depthimage_to_laserscan'), 'cfg', 'param.yaml')
    params_file = LaunchConfiguration('params_file')
    default_params_file = os.path.join(get_package_share_directory("exomy_sim"),
                                       'config', 'mapper_params_online_async.yaml')
    #included_launch = launch_ros.actions.IncludeLaunchDescription(package='foo', launch='my_launch.py', arguments=[...])

    # Process the URDF file
    urdf_file = os.path.join(get_package_share_directory('exomy_sim'),'models/exomy_model/exomy_model.urdf')
    # Some packages require the path to the urdf file, others require the opened file:
    with open(urdf_file, 'r') as infp:
            robot_desc = infp.read()


    use_sim_time = LaunchConfiguration('use_sim_time')
    declare_use_sim_time_cmd = DeclareLaunchArgument(
            'use_sim_time',
            default_value='False',
            description='Use simulation (Gazebo) clock if true')
    declare_params_file_cmd = DeclareLaunchArgument(
            'params_file',
            default_value=default_params_file,
            description='Full path to the ROS2 parameters file to use for the slam_toolbox node')


    robot = Node(
        package='exomy',
        executable='robot_node_modified',
        name='robot_node_modified',
        namespace=namespace_,
        parameters=[exomy_config],
        output='screen'
    )

    joint_command_node = Node(
        package='exomy_sim',
        executable='joint_command_node',
        name='joint_command_node',
        output='screen',

    )

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_desc,
            # 'use_sim_time': use_sim_time,
        }],
    )

    motors = Node(
        package='exomy',
        executable='motor_node',
        name='motor_node',
        namespace=namespace_,
        parameters=[exomy_config],
        output='screen'
    )

    rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        # output='screen',
        output={'stdout':'log'},
        arguments=['-d', sim_config],
        parameters=[{
            'use_sim_time': use_sim_time,
        }]
    )

    # gazebo = ExecuteProcess(
    #     cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so', world],
    #     output='screen')

    # Spawn rover
    # spawn_rover = Node(
    #     package='gazebo_ros',
    #     executable='spawn_entity.py',
    #     name='spawn_entity',
    #     namespace='',
    #     arguments=['-entity',
    #                'exomy',
    #                '-x', '1.5', '-y', '1', '-z', '2',
    #                '-file', urdf_file,
    #                '-reference_frame', 'world']
    # )

    depth2scan = Node(
            package='depthimage_to_laserscan',
            node_executable='depthimage_to_laserscan_node',
            node_name='depthimage_to_laserscan_node',
            remappings=[('depth','/camera/depth/image_raw'),
                        ('depth_camera_info', '/camera/depth/camera_info'),
                        ('scan','/scan')],
            parameters=[depth_param_config])

    return LaunchDescription([
        # Set env var to print messages colored. The ANSI color codes will appear in a log.
        SetEnvironmentVariable('RCUTILS_COLORIZED_OUTPUT', '1'),
        
        # Declare launch arguments
        declare_use_sim_time_cmd,
        #slam
        declare_params_file_cmd,

        # Declare nodes
        robot,
        joint_command_node,
        robot_state_publisher,
        # depth2scan, #pridat az bude realsense
        rviz2,
        # gazebo,
        # spawn_rover,
        depth2scan,
        motors,
        
    ])
