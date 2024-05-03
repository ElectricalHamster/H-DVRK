# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "geometry_msgs;roscpp;rospy;sensor_msgs;std_msgs;cisst_msgs;crtk_msgs;cisst_ros_bridge".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lcisst_ros_crtk".split(';') if "-lcisst_ros_crtk" != "" else []
PROJECT_NAME = "cisst_ros_crtk"
PROJECT_SPACE_DIR = "/home/hands/ros_ws/install"
PROJECT_VERSION = "2.0.0"
