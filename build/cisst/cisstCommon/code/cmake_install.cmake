# Install script for directory: /home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/code

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.1.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.1.0")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.1.0"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hands/ros_ws/build/cisst/lib/libcisstCommon.so.1.1.0")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.1.0" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.1.0")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.1.0"
         OLD_RPATH "/home/hands/ros_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so.1.1.0")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/hands/ros_ws/build/cisst/lib/libcisstCommon.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so"
         OLD_RPATH "/home/hands/ros_ws/build/cisst/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcisstCommon.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cisstCommon" TYPE FILE FILES
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnAccessorMacros.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnAssert.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnCallbackStreambuf.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnClassRegister.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnClassRegisterMacros.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnClassServices.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnClassServicesBase.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnCommandLineOptions.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnConstants.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFormat.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctions.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsArray.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsEnumMacros.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsJSON.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsList.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsMacros.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsMatrixHelpers.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsString.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsVector.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDataFunctionsVectorHelpers.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnDeSerializer.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnExport.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnExportMacros.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnForwardDeclarations.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnGenericObject.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnGenericObjectProxy.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnGetChar.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnKbHit.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnLODMultiplexerStreambuf.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnLODOutputMultiplexer.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnLogLoD.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnLogger.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnMultiplexerStreambuf.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnMultiplexerStreambufProxy.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnNamedMap.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnObjectRegister.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnOutputMultiplexer.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnPath.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnPortability.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnPrintf.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnRandomSequence.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnRequiresDeepCopy.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnSerializer.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnStreamRawParser.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnStrings.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnThrow.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnTokenizer.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnTypeTraits.h"
    "/home/hands/ros_ws/src/cisst-saw/cisst/cisstCommon/cmnUnits.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xcisstCommonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES "/home/hands/ros_ws/build/cisst/include/cisstCommon.h")
endif()

