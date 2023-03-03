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
    default_params_file = os.path.join(get_package_share_directory("exomy_sim"),
                                       'config', 'mapper_params_online_async.yaml')
    param_config = os.path.join(get_package_share_directory('depthimage_to_laserscan'), 'cfg', 'param.yaml')


    use_sim_time = LaunchConfiguration('use_sim_time')
    declare_use_sim_time_cmd = DeclareLaunchArgument(
            'use_sim_time',
            default_value='False',
            description='Use simulation (Gazebo) clock if true')
    declare_params_file_cmd = DeclareLaunchArgument(
            'params_file',
            default_value=default_params_file,
            description='Full path to the ROS2 parameters file to use for the slam_toolbox node')

    #base code
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

    motors = Node(
        package='exomy',
        executable='motor_node',
        name='motor_node',
        namespace=namespace_,
        parameters=[exomy_config],
        output='screen'
    )
    # realsense + odom
    depthimage_to_laserscan = Node(
            package='depthimage_to_laserscan',
            executable='depthimage_to_laserscan_node',
            name='depthimage_to_laserscan_node',
            remappings=[('depth','/depth/image_raw'),
                        ('depth_camera_info', '/depth/camera_info'),
                        ('scan', '/rgbd_scan')],
            parameters=[param_config]
        )
    visual_odometry =  Node(
            package='rtabmap_ros',
            executable='rgbd_odometry',
            name='visual_odometry',
            remappings=[('rgb/image','/color/image_raw'),
                        ('depth/image', '/depth/image_raw'),
                        ('rgb/camera_info', '/color/camera_info'),
                        #('odom','/visual_odom')
                        ],   
            parameters=[{'frame_id': 'base_footprint'},
                        {'publish_tf': True}]     
    )

    return LaunchDescription([
        # Set env var to print messages colored. The ANSI color codes will appear in a log.
        SetEnvironmentVariable('RCUTILS_COLORIZED_OUTPUT', '1'),
        
        # Declare launch arguments
        declare_use_sim_time_cmd,
        #slam
        declare_params_file_cmd,

        # Declare nodes to move
        robot,
        joint_command_node,
        motors,
        # Realsense
        depthimage_to_laserscan,
        visual_odometry,
        
    ])
