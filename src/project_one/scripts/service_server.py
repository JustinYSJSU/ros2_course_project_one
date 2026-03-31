#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from project_one.srv import OddEvenCheck

class OddEvenCheckServer(Node):
    def __init__(self):
        super.__init__("odd_even_service_server_node")
        self.srv = self.create_service(OddEvenCheck, 'odd_even_check', self.determine_odd_even)

    def determine_odd_even(self, request, response):
        print("Request received")

        if request.number % 2 == 0:
            response.decision = "even"
        elif requset.number % 2 == 0:
            response.decision = "odd"
        else:
            respon.decision = "error"
def main():
    rclpy.init()
    
    node = OddEvenCheckServer()

    print("OddEvenCheck is running...")

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("Terminating node...")
        node.destroy_node

if __name__ == '__main__':
    main()