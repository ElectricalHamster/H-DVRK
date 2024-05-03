# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "cmake_modules;roscpp;std_msgs;sensor_msgs;tf;roslib".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lecm_kinematics;-lpsm_kinematics".split(';') if "-lecm_kinematics;-lpsm_kinematics" != "" else []
PROJECT_NAME = "cwru_dvrk_kinematics"
PROJECT_SPACE_DIR = "/home/hands/ros_ws/install"
PROJECT_VERSION = "0.0.0"
