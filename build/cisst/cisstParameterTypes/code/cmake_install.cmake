# Install script for directory: /home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/code

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstParameterTypesx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so.1.1.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so.1.1.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so.1.1.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hands/ros_ws/build/cisst/lib/libcisstParameterTypes.so.1.1.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so.1.1.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so.1.1.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so.1.1.0"
         OLD_RPATH "/home/hands/ros_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so.1.1.0")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstParameterTypesx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hands/ros_ws/build/cisst/lib/libcisstParameterTypes.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so"
         OLD_RPATH "/home/hands/ros_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstParameterTypes.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstParameterTypesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.1/cmake" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/share/cisst-1.1/cmake/cisstParameterTypesInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstParameterTypesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.1/cmake" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/share/cisst-1.1/cmake/cisstParameterTypesInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstParameterTypesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.1/cmake" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/share/cisst-1.1/cmake/cisstParameterTypesInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstParameterTypesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.1/cmake" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/share/cisst-1.1/cmake/cisstParameterTypesInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstParameterTypesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstParameterTypes" TYPE FILE FILES
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmActuatorParameters.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmActuatorState.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmEventButton.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmExport.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmForceCartesianGet.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmForceCartesianSet.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmForceTorqueJointSet.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmForwardDeclarations.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmGainParameters.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmInputDataConverter.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmJointType.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmMaskedVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmMotionBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmPositionCartesianSet.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmRobotState.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationDynamic.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationFixed.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmTransformationManager.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityCartesianSet.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityJointGet.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstParameterTypes/prmVelocityJointSet.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstParameterTypesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstParameterTypes" TYPE FILE FILES
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmActuatorJointCoupling.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmPositionCartesianGet.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmPositionCartesianArrayGet.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmVelocityCartesianGet.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmPositionJointGet.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmPositionJointSet.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmCartesianImpedanceGains.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmIMUSensors.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmStateJoint.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmConfigurationJoint.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmInputData.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmKeyValue.h"
    "/home/hands/ros_ws/build/cisst/include/cisstParameterTypes/prmOperatingState.h"
    )
endif()

