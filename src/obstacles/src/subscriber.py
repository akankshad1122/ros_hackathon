#!/usr/bin/env python3

import rospy
from obstacles.msg import coords

def callback(msg):
    print (msg.x)
    print(msg.y)
    

rospy.init_node('subscriber')  
sub = rospy.Subscriber('coordinates', coords, callback)

rospy.spin()