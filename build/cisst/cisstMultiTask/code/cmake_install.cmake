# Install script for directory: /home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/code

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/include/cisstMultiTask/mtsConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.1/cmake" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/share/cisst-1.1/cmake/cisstMultiTaskBuild.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.1.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.1.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.1.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hands/ros_ws/build/cisst/lib/libcisstMultiTask.so.1.1.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.1.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.1.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.1.0"
         OLD_RPATH "/home/hands/ros_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so.1.1.0")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hands/ros_ws/build/cisst/lib/libcisstMultiTask.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so"
         OLD_RPATH "/home/hands/ros_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstMultiTask.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.1/cmake" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/share/cisst-1.1/cmake/cisstMultiTaskInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.1/cmake" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/share/cisst-1.1/cmake/cisstMultiTaskInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cisst-1.1/cmake" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/share/cisst-1.1/cmake/cisstMultiTaskInternal.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadMethod.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableQualifiedReadReturnVoidMethod.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadMethod.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableReadReturnVoidMethod.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidFunction.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidMethod.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidReturnBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableVoidReturnMethod.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableWriteReturnBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCallableWriteReturnMethod.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorEvent.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorFactory.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCollectorState.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandFilteredQueuedWrite.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandFilteredWrite.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQualifiedRead.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedVoid.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedVoidReturn.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWrite.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWriteBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandQueuedWriteReturn.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandRead.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandVoid.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandVoidReturn.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWrite.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWriteBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsCommandWriteReturn.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponent.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponentAddLatency.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponentGeneratorMacros.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsComponentViewer.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsConnection.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsDelayedConnections.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsEventReceiver.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsExport.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFixedSizeVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFixedSizeVectorTypes.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsForwardDeclarations.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionQualifiedRead.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionRead.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionVoid.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionVoidReturn.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionWrite.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsFunctionWriteReturn.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsGenericObject.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsGenericObjectProxy.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterface.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceInput.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceOutput.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceProvided.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsInterfaceRequired.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsIntervalStatistics.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsLODMultiplexerStreambuf.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMacros.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMailBox.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentClient.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentServer.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerComponentServices.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerGlobal.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerGlobalInterface.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerLocal.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsManagerLocalInterface.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMatrix.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandVoid.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandWrite.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsMulticastCommandWriteBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsParameterTypesOld.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsQueue.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyClient.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyCommon.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsSocketProxyServer.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateArray.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateArrayBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateData.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateIndex.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsStateTable.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTask.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskContinuous.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskFromCallback.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskFromSignal.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskManager.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTaskPeriodic.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsTransformationTypes.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsWatchdogClient.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstMultiTask/mtsWatchdogServer.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstMultiTaskx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/include/cisstMultiTask.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstMultiTask" TYPE FILE FILES
    "/home/hands/ros_ws/build/cisst/include/cisstMultiTask/mtsInterfaceCommon.h"
    "/home/hands/ros_ws/build/cisst/include/cisstMultiTask/mtsComponentState.h"
    "/home/hands/ros_ws/build/cisst/include/cisstMultiTask/mtsExecutionResult.h"
    "/home/hands/ros_ws/build/cisst/include/cisstMultiTask/mtsParameterTypes.h"
    )
endif()

