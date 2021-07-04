#!/usr/bin/env python3

import rospy
from obstacles.msg import coords

rospy.init_node('obstacles_list')

pub = rospy.Publisher('coordinates', coords, queue_size=15)

rate = rospy.Rate(5)

while not rospy.is_shutdown():
    msg = coords()
    msg.x = [0,0,0,1.5,1.5,1.5,1.5,3.0,3.0,3.0,3.0,4.5,4.5,4.5,4.5]
    msg.y = [1.5, 3.0, 4.5, 0, 1.5, 3.0, 4.5, 0, 1.5, 3.0, 4.5, 0, 1.5, 3.0, 4.5]
    
    pub.publish(msg)
    rate.sleep()


    