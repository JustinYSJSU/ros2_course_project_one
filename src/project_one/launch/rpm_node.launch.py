#!/usr/bin/env python3
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    '''
    upon running,  will launch the specificed Node & execute the below cmd
    '''
    return LaunchDescription([
        Node(
            package="project_one",
            executable=("publisher.py"),
            name="rpm_pub_node",
            parameters=[
                {'rpm': 5.0}
            ]
        ), 
        Node(
            package="project_one",
            executable=("combined.py"),
            name="combined_rpm_node",
            parameters=[
                {'wheel_radius': 10.0}
            ]
        ),
        ExecuteProcess(
            cmd=['ros2', 'topic', 'echo', '/speed'],
            output="screen"
        )
    ]
    )