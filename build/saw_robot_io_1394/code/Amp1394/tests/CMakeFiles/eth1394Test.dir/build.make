# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hands/ros_ws/build/saw_robot_io_1394

# Include any dependencies generated for this target.
include code/Amp1394/tests/CMakeFiles/eth1394Test.dir/depend.make

# Include the progress variables for this target.
include code/Amp1394/tests/CMakeFiles/eth1394Test.dir/progress.make

# Include the compile flags for this target's objects.
include code/Amp1394/tests/CMakeFiles/eth1394Test.dir/flags.make

code/Amp1394/tests/CMakeFiles/eth1394Test.dir/mainEth1394.cpp.o: code/Amp1394/tests/CMakeFiles/eth1394Test.dir/flags.make
code/Amp1394/tests/CMakeFiles/eth1394Test.dir/mainEth1394.cpp.o: /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/tests/mainEth1394.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hands/ros_ws/build/saw_robot_io_1394/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object code/Amp1394/tests/CMakeFiles/eth1394Test.dir/mainEth1394.cpp.o"
	cd /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/eth1394Test.dir/mainEth1394.cpp.o -c /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/tests/mainEth1394.cpp

code/Amp1394/tests/CMakeFiles/eth1394Test.dir/mainEth1394.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eth1394Test.dir/mainEth1394.cpp.i"
	cd /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/tests/mainEth1394.cpp > CMakeFiles/eth1394Test.dir/mainEth1394.cpp.i

code/Amp1394/tests/CMakeFiles/eth1394Test.dir/mainEth1394.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eth1394Test.dir/mainEth1394.cpp.s"
	cd /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/tests/mainEth1394.cpp -o CMakeFiles/eth1394Test.dir/mainEth1394.cpp.s

# Object files for target eth1394Test
eth1394Test_OBJECTS = \
"CMakeFiles/eth1394Test.dir/mainEth1394.cpp.o"

# External object files for target eth1394Test
eth1394Test_EXTERNAL_OBJECTS =

/home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/eth1394Test: code/Amp1394/tests/CMakeFiles/eth1394Test.dir/mainEth1394.cpp.o
/home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/eth1394Test: code/Amp1394/tests/CMakeFiles/eth1394Test.dir/build.make
/home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/eth1394Test: lib/libAmp1394.a
/home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/eth1394Test: code/Amp1394/tests/CMakeFiles/eth1394Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hands/ros_ws/build/saw_robot_io_1394/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/eth1394Test"
	cd /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/eth1394Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
code/Amp1394/tests/CMakeFiles/eth1394Test.dir/build: /home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/eth1394Test

.PHONY : code/Amp1394/tests/CMakeFiles/eth1394Test.dir/build

code/Amp1394/tests/CMakeFiles/eth1394Test.dir/clean:
	cd /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests && $(CMAKE_COMMAND) -P CMakeFiles/eth1394Test.dir/cmake_clean.cmake
.PHONY : code/Amp1394/tests/CMakeFiles/eth1394Test.dir/clean

code/Amp1394/tests/CMakeFiles/eth1394Test.dir/depend:
	cd /home/hands/ros_ws/build/saw_robot_io_1394 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/tests /home/hands/ros_ws/build/saw_robot_io_1394 /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests/CMakeFiles/eth1394Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : code/Amp1394/tests/CMakeFiles/eth1394Test.dir/depend
