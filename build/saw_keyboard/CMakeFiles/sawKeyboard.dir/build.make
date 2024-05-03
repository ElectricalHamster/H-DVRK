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
CMAKE_SOURCE_DIR = /home/hands/ros_ws/src/cisst-saw/sawKeyboard/components

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hands/ros_ws/build/saw_keyboard

# Include any dependencies generated for this target.
include CMakeFiles/sawKeyboard.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sawKeyboard.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sawKeyboard.dir/flags.make

CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.o: CMakeFiles/sawKeyboard.dir/flags.make
CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.o: /home/hands/ros_ws/src/cisst-saw/sawKeyboard/components/code/mtsKeyboard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hands/ros_ws/build/saw_keyboard/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.o -c /home/hands/ros_ws/src/cisst-saw/sawKeyboard/components/code/mtsKeyboard.cpp

CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hands/ros_ws/src/cisst-saw/sawKeyboard/components/code/mtsKeyboard.cpp > CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.i

CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hands/ros_ws/src/cisst-saw/sawKeyboard/components/code/mtsKeyboard.cpp -o CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.s

# Object files for target sawKeyboard
sawKeyboard_OBJECTS = \
"CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.o"

# External object files for target sawKeyboard
sawKeyboard_EXTERNAL_OBJECTS =

/home/hands/ros_ws/devel/.private/saw_keyboard/lib/libsawKeyboard.so: CMakeFiles/sawKeyboard.dir/code/mtsKeyboard.cpp.o
/home/hands/ros_ws/devel/.private/saw_keyboard/lib/libsawKeyboard.so: CMakeFiles/sawKeyboard.dir/build.make
/home/hands/ros_ws/devel/.private/saw_keyboard/lib/libsawKeyboard.so: /usr/lib/x86_64-linux-gnu/libGL.so
/home/hands/ros_ws/devel/.private/saw_keyboard/lib/libsawKeyboard.so: /usr/lib/x86_64-linux-gnu/libGLU.so
/home/hands/ros_ws/devel/.private/saw_keyboard/lib/libsawKeyboard.so: CMakeFiles/sawKeyboard.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hands/ros_ws/build/saw_keyboard/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/hands/ros_ws/devel/.private/saw_keyboard/lib/libsawKeyboard.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sawKeyboard.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sawKeyboard.dir/build: /home/hands/ros_ws/devel/.private/saw_keyboard/lib/libsawKeyboard.so

.PHONY : CMakeFiles/sawKeyboard.dir/build

CMakeFiles/sawKeyboard.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sawKeyboard.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sawKeyboard.dir/clean

CMakeFiles/sawKeyboard.dir/depend:
	cd /home/hands/ros_ws/build/saw_keyboard && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hands/ros_ws/src/cisst-saw/sawKeyboard/components /home/hands/ros_ws/src/cisst-saw/sawKeyboard/components /home/hands/ros_ws/build/saw_keyboard /home/hands/ros_ws/build/saw_keyboard /home/hands/ros_ws/build/saw_keyboard/CMakeFiles/sawKeyboard.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sawKeyboard.dir/depend

