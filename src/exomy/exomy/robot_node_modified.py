#!/usr/bin/env python
from exomy_msgs.msg import MotorCommands
import rclpy
from rclpy.node import Node
from .rover_modified import Rover
from geometry_msgs.msg import Twist



class RobotNode(Node):
    def __init__(self):
        #name in ros domain is created and the class is instantiated with subscriber and publisher
        self.node_name = 'robot_node_modified'
        super().__init__(self.node_name)
        #a subscriber is created on topic: cmd_vel. when a message is received it is sent to the "rover_callback" function
        self.cmdvel_sub = self.create_subscription(
            Twist,
            'cmd_vel',
            self.rover_callback,
            10)
        #a publisher is created that writes a message type defined as MotorCommands on topic: motorcommands. the message is part of the exomy library
        self.robot_pub = self.create_publisher(
            MotorCommands,
            'motor_commands',
            1)

        #where an object from the class rover_modified is instantiated
        self.robot = Rover()

    #here the rover callback starts as a separate function
    def rover_callback(self, msg):
        #the cmds variable is created and defined as the MotorCommands message type
        print(msg)
        cmds = MotorCommands()
        #the values in cmds are updated through the function set_steeringangles which is part 
        # of the rover_modified class. set_steeringangles takes the desired linear and angular velocity of the robot as an argument
        cmds.motor_angles, cmds.motor_speeds = self.robot.Set_SteeringAngles(
            msg.linear.x, msg.angular.z)
        print(cmds)    
        #here the message is sent out on the topic allocated to it
        self.robot_pub.publish(cmds)


def main(args=None):
    rclpy.init(args=args)
    #the class that is defined is started to create the publisher and subscriber
    try:
        robot_node = RobotNode()
        try:
            #class listens for messages and processes and forwards them when they arrive
            rclpy.spin(robot_node)
        finally:
            #the class shuts down when the code is extinguished
            robot_node.destroy_node()
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()


if __name__ == '__main__':
    main()