# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget blas lapack tmglib)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target blas
add_library(blas STATIC IMPORTED)

# Create imported target lapack
add_library(lapack STATIC IMPORTED)

# Create imported target tmglib
add_library(tmglib STATIC IMPORTED)

# Import target "blas" for configuration ""
set_property(TARGET blas APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(blas PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "Fortran"
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "m"
  IMPORTED_LOCATION_NOCONFIG "/home/hands/ros_ws/build/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/lib/libblas.a"
  )

# Import target "lapack" for configuration ""
set_property(TARGET lapack APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(lapack PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "Fortran"
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "blas"
  IMPORTED_LOCATION_NOCONFIG "/home/hands/ros_ws/build/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/lib/liblapack.a"
  )

# Import target "tmglib" for configuration ""
set_property(TARGET tmglib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tmglib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "Fortran"
  IMPORTED_LINK_INTERFACE_LIBRARIES_NOCONFIG "lapack"
  IMPORTED_LOCATION_NOCONFIG "/home/hands/ros_ws/build/cisst_netlib/cisstNetlibLapack/src/cisstNetlib_Fortran-build/lib/libtmglib.a"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
