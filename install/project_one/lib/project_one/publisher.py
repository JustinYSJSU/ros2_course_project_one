#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

RPM = 10

class RPMPublisher(Node):
    def __init__(self):
        super().__init__("rpm_pub_node")
        self.pub = self.create_publisher(Float32, "rpm", 10)
        self.time = self.create_timer(0.5, self.publish_rpm)
    
    def publish_rpm(self):
        msg = Float32()
        msg.data = float(RPM)
        self.pub.publish(msg)

def main():
    rclpy.init() # initialize ros2 communication
    my_pub = RPMPublisher()
    print("Publisher running...")

    try:
        rclpy.spin(my_pub) # run until interrupt via keyboard
    except KeyboardInterrupt:
        print("Terminating node...")
        my_pub.destroy_node()

if __name__ == '__main__':
    main()