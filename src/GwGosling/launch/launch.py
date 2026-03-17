from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='GwGosling',
            executable='publisher_node',
            name='kissyohomies',
            output='screen'
        ),
        Node(
            package='GwGosling',
            executable='subscriber_node',
            name='SierraBurgesIsATigerrrr',
            output='screen'
        ),
    ])
