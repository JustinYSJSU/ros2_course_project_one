#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from project_one.srv import OddEvenCheck

class OddEvenCheckClient(Node):
    def __init__(self):
        super.__init__("odd_even_service_client_node")
        self.client = self.create_client(OddEvenCheck, 'odd_even_check')
        self.req = OddEvenCheck.Request()
    
    def send_request(self, num):
        self.req.number = int(num)
        self.client.wait_for_service()
        self.future = self.client.call_async(self.req) # wait until response
        rclpy.spin_until_future_complete(self, self.future)

        self.result = self.future.result()
        return self.result

def main():
    rclpy.init()
    
    node = OddEvenCheckClient()

    print("OddEvenCheck is running...")

    try:
        user_input = input("Enter an integer: ")
        node.send_request(user_input)
        print("Service returned: " + res.decision)
    except KeyboardInterrupt:
        print("Terminating node...")
        node.destroy_node

if __name__ == '__main__':
    main()