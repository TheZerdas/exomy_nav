#!/usr/bin/env python
import numpy as np
from .locomotion_modes import LocomotionMode
import math


class Rover():
    '''
    Rover class contains all the math and motor control algorithms to move the rover
    '''

    # Defining wheel names
    FL, FR, CL, CR, RL, RR = range(0, 6)

    # Defining locomotion modes
    #FAKE_ACKERMANN, ACKERMANN, POINT_TURN, CRABBING = range(0, 4)

    def __init__(self):
        #self.locomotion_mode = LocomotionMode.FAKE_ACKERMANN

        self.wheel_x = 12.0
        self.wheel_y = 20.0

    def Set_SteeringAngles(self, lin_vel_x, ang_vel):
        '''
        Converts the steering command [angle of joystick] to angles for the different motors
        '''
        steering_angles = [0]*6
        motor_speeds = [0]*6

        if ang_vel != 0:
            radius = (abs(lin_vel_x)/abs(ang_vel))*10

        # Distance from center og the rover to the top (centimeters):
        y_top = 19.5 # check if it's correct
        # Distance from center of the rover to the side (centimeters):
        x_side = 15 # check if it's correct

        """
        Steering angles calculation 
        """
        # If the angular velociy is 0, the angles for the wheel are set to 0
        if ang_vel == 0: 
            steering_angles[self.FL] = 0
            steering_angles[self.FR] = 0
            steering_angles[self.CL] = 0
            steering_angles[self.CR] = 0
            steering_angles[self.RL] = 0
            steering_angles[self.RR] = 0
        # If the turning point is within the chassis of the robot, turn on the spot:
        elif radius <= x_side : 
            steering_angles[self.FL] = math.atan2(y_top,x_side)
            steering_angles[self.FR] = -math.atan2(y_top,x_side)
            steering_angles[self.CL] = 0
            steering_angles[self.CR] = 0
            steering_angles[self.RL] = -math.atan2(y_top,x_side)
            steering_angles[self.RR] = math.atan2(y_top,x_side)
        # Steering angles if turning anticlockwise moving forward or clockwise moving backwards
        elif (ang_vel > 0 and np.sign(lin_vel_x) > 0) or (ang_vel < 0 and np.sign(lin_vel_x) < 0):
            steering_angles[self.FL] = -math.atan2(y_top,(radius-x_side))
            steering_angles[self.FR] = -math.atan2(y_top,(radius+x_side))
            steering_angles[self.CL] = 0
            steering_angles[self.CR] = 0
            steering_angles[self.RL] = math.atan2(y_top,(radius-x_side))
            steering_angles[self.RR] = math.atan2(y_top,(radius+x_side))
        # Steering angles if turning clockwise moving forward or anticlockwise moving backwards
        elif (ang_vel < 0 and np.sign(lin_vel_x) > 0) or (ang_vel > 0 and np.sign(lin_vel_x) < 0):
            steering_angles[self.FL] = math.atan2(y_top,(radius+x_side))
            steering_angles[self.FR] = math.atan2(y_top,(radius-x_side))
            steering_angles[self.CL] = 0
            steering_angles[self.CR] = 0
            steering_angles[self.RL] = -math.atan2(y_top,(radius+x_side))
            steering_angles[self.RR] = -math.atan2(y_top,(radius-x_side))

        """
        Motor speeds calculation
        """
        # Speed moving forward/backward = linear velocity 
        if ang_vel == 0: 
            motor_speeds[self.FL] = lin_vel_x
            motor_speeds[self.FR] = lin_vel_x
            motor_speeds[self.CL] = lin_vel_x
            motor_speeds[self.CR] = lin_vel_x
            motor_speeds[self.RL] = lin_vel_x
            motor_speeds[self.RR] = lin_vel_x
        # Speed turning in place (anticlockwise), velocity of corner wheels = angular velocity 
        elif radius <= x_side and ang_vel > 0: 
            frontLeft = math.sqrt((y_top*y_top)+(x_side*x_side))*abs(ang_vel)
            centerLeft = x_side*abs(ang_vel)
            relation = centerLeft/frontLeft # relation between corner wheel and center wheel velocity (center wheels slower)
            motor_speeds[self.FL] = -abs(ang_vel)
            motor_speeds[self.FR] = abs(ang_vel)
            motor_speeds[self.CL] = -abs(ang_vel)*relation
            motor_speeds[self.CR] = abs(ang_vel)*relation
            motor_speeds[self.RL] = -abs(ang_vel)
            motor_speeds[self.RR] = abs(ang_vel)
        # Speed turning in place (clockwise), velocity of corner wheels = angular velocity 
        elif radius <= x_side and ang_vel < 0: 
            frontLeft = math.sqrt((y_top*y_top)+(x_side*x_side))*abs(ang_vel)
            centerLeft = x_side*abs(ang_vel)
            relation = centerLeft/frontLeft # relation between corner wheel and center wheel velocity (center wheels slower)
            motor_speeds[self.FL] = abs(ang_vel)
            motor_speeds[self.FR] = -abs(ang_vel)
            motor_speeds[self.CL] = abs(ang_vel)*relation
            motor_speeds[self.CR] = -abs(ang_vel)*relation
            motor_speeds[self.RL] = abs(ang_vel)
            motor_speeds[self.RR] = -abs(ang_vel)
        # Speed turning anticlockwise moving forward/backward, velocity of frontRight wheel = linear velocity 
        elif ang_vel > 0:
            frontLeft = (math.sqrt((y_top*y_top)+((radius-x_side)*(radius-x_side)))*abs(ang_vel))*np.sign(lin_vel_x)
            frontRight = (math.sqrt((y_top*y_top)+((radius+x_side)*(radius+x_side)))*abs(ang_vel))*np.sign(lin_vel_x)
            frontRelation = frontLeft/frontRight # relation of speed between the front wheels (frontLeft is slower)
            centerLeft = ((radius-x_side)*abs(ang_vel))*np.sign(lin_vel_x)
            centerRight = ((radius+x_side)*abs(ang_vel))*np.sign(lin_vel_x)
            centerRelation = centerLeft/centerRight # relation of speed between the center wheels (centerLeft is slower)
            frontCenterRelation = centerRight/frontRight # relation between center and front wheels (center is slower)
            motor_speeds[self.FL] = lin_vel_x*frontRelation
            motor_speeds[self.FR] = lin_vel_x
            motor_speeds[self.CL] = lin_vel_x*frontCenterRelation*centerRelation
            motor_speeds[self.CR] = lin_vel_x*frontCenterRelation
            motor_speeds[self.RL] = lin_vel_x*frontRelation
            motor_speeds[self.RR] = lin_vel_x
        # Speed turning clockwise moving forward/backward, velocity of frontLeft wheel = linear velocity
        elif ang_vel < 0:
            frontLeft = (math.sqrt((y_top*y_top)+((radius+x_side)*(radius+x_side)))*abs(ang_vel))*np.sign(lin_vel_x)
            frontRight = (math.sqrt((y_top*y_top)+((radius-x_side)*(radius-x_side)))*abs(ang_vel))*np.sign(lin_vel_x)
            frontRelation = frontRight/frontLeft # relation of speed between the front wheels (frontRight is slower)
            centerLeft = ((radius+x_side)*abs(ang_vel))*np.sign(lin_vel_x)
            centerRight = ((radius-x_side)*abs(ang_vel))*np.sign(lin_vel_x)
            centerRelation = centerRight/centerLeft # relation of speed between the center wheels (centerRight is slower)
            frontCenterRelation = centerLeft/frontLeft # relation between center and front wheels (center is slower)
            motor_speeds[self.FL] = lin_vel_x
            motor_speeds[self.FR] = lin_vel_x*frontRelation
            motor_speeds[self.CL] = lin_vel_x*frontCenterRelation
            motor_speeds[self.CR] = lin_vel_x*frontCenterRelation*centerRelation
            motor_speeds[self.RL] = lin_vel_x
            motor_speeds[self.RR] = lin_vel_x*frontRelation

        # Motor speeds are converted to int's
        motor_speeds[self.FL] = int(motor_speeds[self.FL])
        motor_speeds[self.FR] = int(motor_speeds[self.FR])
        motor_speeds[self.CL] = int(motor_speeds[self.CL])
        motor_speeds[self.CR] = int(motor_speeds[self.CR])
        motor_speeds[self.RL] = int(motor_speeds[self.RL])
        motor_speeds[self.RR] = int(motor_speeds[self.RR])

        # Steering angles are first converted to degrees and then to int's
        steering_angles[self.FL] = int(np.rad2deg(steering_angles[self.FL]))
        steering_angles[self.FR] = int(np.rad2deg(steering_angles[self.FR]))
        steering_angles[self.CL] = int(np.rad2deg(steering_angles[self.CL]))
        steering_angles[self.CR] = int(np.rad2deg(steering_angles[self.CR]))
        steering_angles[self.RL] = int(np.rad2deg(steering_angles[self.RL]))
        steering_angles[self.RR] = int(np.rad2deg(steering_angles[self.RR]))
    
        return steering_angles, motor_speeds