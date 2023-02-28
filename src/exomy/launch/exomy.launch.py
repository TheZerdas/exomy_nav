import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import LaunchConfiguration
from launch.actions import SetEnvironmentVariable, ExecuteProcess, DeclareLaunchArgument

namespace_ = 'exomy'

def generate_launch_description():
    # Get the path to tconfig files
    exomy_config = os.path.join(get_package_share_directory('exomy'),'exomy.yaml')
    sim_config = os.path.join(get_package_share_directory('exomy_sim'),'rviz/simulation.rviz')

    use_sim_time = LaunchConfiguration('use_sim_time')
    declare_use_sim_time_cmd = DeclareLaunchArgument(
            'use_sim_time',
            default_value='True',
            description='Use simulation (Gazebo) clock if true')

    robot = Node(
        package='exomy',
        executable='robot_node_modified',
        name='robot_node_modified',
        namespace=namespace_,
        parameters=[exomy_config],
        output='screen'
    )
    
    motors = Node(
        package='exomy',
        executable='motor_node',
        name='motor_node',
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
            'use_sim_time': use_sim_time,
        }],
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

    return LaunchDescription([
        # Declare launch arguments
        declare_use_sim_time_cmd,

        # Declare nodes
        robot,
        motors,
        joint_command_node,
        robot_state_publisher,
        rviz2
    ])
