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
            name="rpm_pub_node"
        ), 
        ExecuteProcess(
            cmd=['ros2', 'topic', 'list'],
            output="screen"
        )
    ]
    )