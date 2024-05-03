# - Config file for the Amp1394 package
# It defines the following variables
#  Amp1394_INCLUDE_DIR  - include directories for Amp1394
#  Amp1394_LIBRARY_DIR  - link library directories for Amp1394
#  Amp1394_LIBRARIES    - libraries to link against

# Version
set (Amp1394_VERSION_MAJOR "1")
set (Amp1394_VERSION_MINOR "7")
set (Amp1394_VERSION_PATCH "0")
set (Amp1394_VERSION "1.7.0")
 
# Compute paths
set (Amp1394_INCLUDE_DIR "/home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib;/home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394")
set (Amp1394_LIBRARY_DIR "/home/hands/ros_ws/build/saw_robot_io_1394/lib")
 
# Libraries to link against
set (Amp1394_LIBRARIES "Amp1394;raw1394")

# FireWire/Ethernet support
set (Amp1394_HAS_RAW1394 "ON")
set (Amp1394_HAS_PCAP    "OFF")
