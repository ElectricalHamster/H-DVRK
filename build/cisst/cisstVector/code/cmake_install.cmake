# Install script for directory: /home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/code

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.1/cmake" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/share/cisst-1.1/cmake/cisstVectorExternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.1.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.1.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.1.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hands/ros_ws/build/cisst/lib/libcisstVector.so.1.1.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.1.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.1.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.1.0"
         OLD_RPATH "/home/hands/ros_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so.1.1.0")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hands/ros_ws/build/cisst/lib/libcisstVector.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so"
         OLD_RPATH "/home/hands/ros_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstVector.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.1/cmake" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/share/cisst-1.1/cmake/cisstVectorInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstVector" TYPE FILE FILES
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctAngleRotation2.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctAxisAngleRotation3.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctBarycentricVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctBinaryOperations.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctBoundingBox3.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctContainerTraits.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicMatrix.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicMatrixJSON.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsDynamicVectorJSON.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeMatrix.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeMatrixJSON.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsFixedSizeVectorJSON.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsTransformations.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDataFunctionsTransformationsJSON.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDeterminant.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicCompactLoopEngines.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstMatrixBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstMatrixRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstNArrayBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstNArrayRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstVectorBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicConstVectorRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrix.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixLoopEngines.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixOwner.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixRefOwner.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicMatrixTypes.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArray.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayLoopEngines.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayOwner.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicNArrayRefOwner.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorLoopEngines.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorOwner.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorRefOwner.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctDynamicVectorTypes.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctEulerRotation3.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctExport.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFastCopy.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstMatrixBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstMatrixRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstVectorBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeConstVectorRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrix.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixLoopEngines.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixTraits.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeMatrixTypes.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorRecursiveEngines.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorTraits.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedSizeVectorTypes.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedStrideMatrixIterator.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFixedStrideVectorIterator.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctForwardDeclarations.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFrame4x4.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFrame4x4Base.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFrame4x4ConstBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctFrameBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation2.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation2Base.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3Base.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3ConstBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3ConstRef.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctMatrixRotation3Ref.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctPlot2DBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctPlot2DOpenGL.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctPrintf.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctQuaternion.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctQuaternionBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctQuaternionRotation3.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctQuaternionRotation3Base.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctRandom.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctRandomDynamicMatrix.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctRandomDynamicNArray.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctRandomDynamicVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctRandomFixedSizeMatrix.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctRandomFixedSizeVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctRandomTransformations.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctRodriguezRotation3.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctRodriguezRotation3Base.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctStoreBackBinaryOperations.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctStoreBackUnaryOperations.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctTransformationTypes.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctTypes.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctUnaryOperations.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctVarStrideMatrixIterator.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctVarStrideNArrayIterator.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstVector/vctVarStrideVectorIterator.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstVectorx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/include/cisstVector.h")
endif()

