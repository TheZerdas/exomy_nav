import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

namespace_ = 'exomy_wrapper'

def generate_launch_description():
    # Get the path to the exomy.yaml parameter file
    exomy_config = os.path.join(get_package_share_directory('exomy'),'exomy.yaml')

    robot = Node(
        package='exomy',
        executable='robot_node_modified',
        name='robot_node',
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

    return LaunchDescription([
        robot,
        motors
    ])
