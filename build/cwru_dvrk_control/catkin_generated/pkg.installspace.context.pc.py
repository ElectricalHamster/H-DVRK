# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;actionlib;sensor_msgs;control_msgs;cwru_dvrk_kinematics".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lecm_interface;-lpsm_interface".split(';') if "-lecm_interface;-lpsm_interface" != "" else []
PROJECT_NAME = "cwru_dvrk_control"
PROJECT_SPACE_DIR = "/home/hands/ros_ws/install"
PROJECT_VERSION = "0.0.0"
