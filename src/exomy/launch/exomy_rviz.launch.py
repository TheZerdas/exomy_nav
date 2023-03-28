import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import SetEnvironmentVariable
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # Get paths to config files
    sim_config = os.path.join(get_package_share_directory('exomy_sim'),'rviz/simulation2.rviz')
    # use_sim_time = LaunchConfiguration('use_sim_time')

    rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        # output='screen',
        output={'stdout':'log'},
        arguments=['-d', sim_config],
        # parameters=[{
        #     'use_sim_time': use_sim_time,
        # }]
    )

    return LaunchDescription([
        # Set env var to print messages colored. The ANSI color codes will appear in a log.
        SetEnvironmentVariable('RCUTILS_COLORIZED_OUTPUT', '1'),
        
        # Declare nodes
        rviz2,
        
    ])