# Install script for directory: /home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/hands/ros_ws/build/cisst/cisstReflexxesTypeII")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hands/ros_ws/build/cisst/lib/libReflexxesTypeII.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libReflexxesTypeII.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ReflexxesTypeII" TYPE FILE FILES
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLFlags.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLInputParameters.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLOutputParameters.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLPositionFlags.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLPositionInputParameters.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLPositionOutputParameters.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLVector.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLVelocityFlags.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLVelocityInputParameters.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/RMLVelocityOutputParameters.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/ReflexxesAPI.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLDecisionTree1A.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLDecisionTree1B.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLDecisionTree1C.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLDecisionTree2.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLDecisions.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLMath.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLPolynomial.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLPosition.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLQuicksort.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLStep1IntermediateProfiles.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLStep1Profiles.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLStep2IntermediateProfiles.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLStep2Profiles.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLStep2WithoutSynchronization.h"
    "/home/hands/ros_ws/build/cisst/cisstRobot/code/Reflexxes/src/cisstReflexxesTypeIIExternal/ReflexxesTypeII/include/TypeIIRMLVelocity.h"
    )
endif()

