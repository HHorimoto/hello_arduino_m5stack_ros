cmake_minimum_required(VERSION 3.0.2)
project(hello_arduino_m5stack_ros)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

catkin_package()