# Install script for directory: /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/hands/ros_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xAmp1394x" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/hands/ros_ws/build/saw_robot_io_1394/lib/libAmp1394.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xAmp1394-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Amp1394" TYPE FILE FILES
    "/home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/BoardIO.h"
    "/home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/AmpIO.h"
    "/home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/Amp1394Time.h"
    "/home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/Amp1394BSwap.h"
    "/home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/BasePort.h"
    "/home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/EthBasePort.h"
    "/home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/EthUdpPort.h"
    "/home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/PortFactory.h"
    "/home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/lib/FirewirePort.h"
    )
endif()

