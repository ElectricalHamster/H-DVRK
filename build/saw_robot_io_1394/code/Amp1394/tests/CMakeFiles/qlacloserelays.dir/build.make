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
include code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/depend.make

# Include the progress variables for this target.
include code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/progress.make

# Include the compile flags for this target's objects.
include code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/flags.make

code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.o: code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/flags.make
code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.o: /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/tests/qlacloserelays.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hands/ros_ws/build/saw_robot_io_1394/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.o"
	cd /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.o -c /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/tests/qlacloserelays.cpp

code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.i"
	cd /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/tests/qlacloserelays.cpp > CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.i

code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.s"
	cd /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/tests/qlacloserelays.cpp -o CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.s

# Object files for target qlacloserelays
qlacloserelays_OBJECTS = \
"CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.o"

# External object files for target qlacloserelays
qlacloserelays_EXTERNAL_OBJECTS =

/home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/qlacloserelays: code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/qlacloserelays.cpp.o
/home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/qlacloserelays: code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/build.make
/home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/qlacloserelays: lib/libAmp1394.a
/home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/qlacloserelays: code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hands/ros_ws/build/saw_robot_io_1394/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/qlacloserelays"
	cd /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qlacloserelays.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/build: /home/hands/ros_ws/devel/.private/saw_robot_io_1394/bin/qlacloserelays

.PHONY : code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/build

code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/clean:
	cd /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests && $(CMAKE_COMMAND) -P CMakeFiles/qlacloserelays.dir/cmake_clean.cmake
.PHONY : code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/clean

code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/depend:
	cd /home/hands/ros_ws/build/saw_robot_io_1394 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components /home/hands/ros_ws/src/cisst-saw/sawRobotIO1394/components/code/Amp1394/tests /home/hands/ros_ws/build/saw_robot_io_1394 /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests /home/hands/ros_ws/build/saw_robot_io_1394/code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : code/Amp1394/tests/CMakeFiles/qlacloserelays.dir/depend

