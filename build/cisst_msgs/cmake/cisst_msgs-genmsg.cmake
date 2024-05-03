# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "cisst_msgs: 5 messages, 1 services")

set(MSG_I_FLAGS "-Icisst_msgs:/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/noetic/share/sensor_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(cisst_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg" NAME_WE)
add_custom_target(_cisst_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cisst_msgs" "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg" NAME_WE)
add_custom_target(_cisst_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cisst_msgs" "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg" "geometry_msgs/Vector3:geometry_msgs/Quaternion:std_msgs/Header"
)

get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg" NAME_WE)
add_custom_target(_cisst_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cisst_msgs" "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg" NAME_WE)
add_custom_target(_cisst_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cisst_msgs" "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg" NAME_WE)
add_custom_target(_cisst_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cisst_msgs" "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv" NAME_WE)
add_custom_target(_cisst_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "cisst_msgs" "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv" "sensor_msgs/JointState:geometry_msgs/Point:geometry_msgs/Quaternion:std_msgs/Header:geometry_msgs/Pose:geometry_msgs/PoseStamped"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cisst_msgs
)
_generate_msg_cpp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cisst_msgs
)
_generate_msg_cpp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cisst_msgs
)
_generate_msg_cpp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cisst_msgs
)
_generate_msg_cpp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cisst_msgs
)

### Generating Services
_generate_srv_cpp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/sensor_msgs/cmake/../msg/JointState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cisst_msgs
)

### Generating Module File
_generate_module_cpp(cisst_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cisst_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(cisst_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(cisst_msgs_generate_messages cisst_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_cpp _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_cpp _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_cpp _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_cpp _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_cpp _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_cpp _cisst_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cisst_msgs_gencpp)
add_dependencies(cisst_msgs_gencpp cisst_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cisst_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cisst_msgs
)
_generate_msg_eus(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cisst_msgs
)
_generate_msg_eus(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cisst_msgs
)
_generate_msg_eus(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cisst_msgs
)
_generate_msg_eus(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cisst_msgs
)

### Generating Services
_generate_srv_eus(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/sensor_msgs/cmake/../msg/JointState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cisst_msgs
)

### Generating Module File
_generate_module_eus(cisst_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cisst_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(cisst_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(cisst_msgs_generate_messages cisst_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_eus _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_eus _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_eus _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_eus _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_eus _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_eus _cisst_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cisst_msgs_geneus)
add_dependencies(cisst_msgs_geneus cisst_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cisst_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cisst_msgs
)
_generate_msg_lisp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cisst_msgs
)
_generate_msg_lisp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cisst_msgs
)
_generate_msg_lisp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cisst_msgs
)
_generate_msg_lisp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cisst_msgs
)

### Generating Services
_generate_srv_lisp(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/sensor_msgs/cmake/../msg/JointState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cisst_msgs
)

### Generating Module File
_generate_module_lisp(cisst_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cisst_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(cisst_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(cisst_msgs_generate_messages cisst_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_lisp _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_lisp _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_lisp _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_lisp _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_lisp _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_lisp _cisst_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cisst_msgs_genlisp)
add_dependencies(cisst_msgs_genlisp cisst_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cisst_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cisst_msgs
)
_generate_msg_nodejs(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cisst_msgs
)
_generate_msg_nodejs(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cisst_msgs
)
_generate_msg_nodejs(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cisst_msgs
)
_generate_msg_nodejs(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cisst_msgs
)

### Generating Services
_generate_srv_nodejs(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/sensor_msgs/cmake/../msg/JointState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cisst_msgs
)

### Generating Module File
_generate_module_nodejs(cisst_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cisst_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(cisst_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(cisst_msgs_generate_messages cisst_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_nodejs _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_nodejs _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_nodejs _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_nodejs _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_nodejs _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_nodejs _cisst_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cisst_msgs_gennodejs)
add_dependencies(cisst_msgs_gennodejs cisst_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cisst_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cisst_msgs
)
_generate_msg_py(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cisst_msgs
)
_generate_msg_py(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cisst_msgs
)
_generate_msg_py(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cisst_msgs
)
_generate_msg_py(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cisst_msgs
)

### Generating Services
_generate_srv_py(cisst_msgs
  "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/sensor_msgs/cmake/../msg/JointState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseStamped.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cisst_msgs
)

### Generating Module File
_generate_module_py(cisst_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cisst_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(cisst_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(cisst_msgs_generate_messages cisst_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/vctDoubleVec.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_py _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/prmCartesianImpedanceGains.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_py _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/mtsIntervalStatistics.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_py _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/BoolStamped.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_py _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/msg/StringStamped.msg" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_py _cisst_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hands/ros_ws/src/cisst-saw/cisst-ros/cisst_msgs/srv/QueryForwardKinematics.srv" NAME_WE)
add_dependencies(cisst_msgs_generate_messages_py _cisst_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(cisst_msgs_genpy)
add_dependencies(cisst_msgs_genpy cisst_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS cisst_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cisst_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/cisst_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(cisst_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(cisst_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(cisst_msgs_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cisst_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/cisst_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(cisst_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(cisst_msgs_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET sensor_msgs_generate_messages_eus)
  add_dependencies(cisst_msgs_generate_messages_eus sensor_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cisst_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/cisst_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(cisst_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(cisst_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(cisst_msgs_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cisst_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/cisst_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(cisst_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(cisst_msgs_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET sensor_msgs_generate_messages_nodejs)
  add_dependencies(cisst_msgs_generate_messages_nodejs sensor_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cisst_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cisst_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/cisst_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(cisst_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(cisst_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(cisst_msgs_generate_messages_py sensor_msgs_generate_messages_py)
endif()
