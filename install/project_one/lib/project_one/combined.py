#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

WHEEL_RADIUS_DEFAULT = 12.5
class CombinedRPM(Node):
    def __init__(self):
        super().__init__("combined_rpm_node")
        self.sub = self.create_subscription(Float32, "rpm", self.calculate_speed, 10)
        self.pub = self.create_publisher(Float32, "speed", 15)
        self.declare_parameter("wheel_radius", WHEEL_RADIUS_DEFAULT) # new addition, set wheel_radius as an actual node parameter

    def calculate_speed(self, rpm_msg):
        print(f"RPM: {rpm_msg.data}")
        speed = rpm_msg.data * self.get_parameter("wheel_radius").get_parameter_value().double_valueE * 2 * 3.14 / 60
        msg = Float32()
        msg.data = float(speed)
        self.pub.publish(msg)
        
def main():
    rclpy.init()
    
    node = CombinedRPM()

    print("Waiting for data...")

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("Terminating node...")
        node.destroy_node

if __name__ == '__main__':
    main()