# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ishanverma/Desktop/cs205

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ishanverma/Desktop/cs205/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cs205.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cs205.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cs205.dir/flags.make

CMakeFiles/cs205.dir/main.cpp.o: CMakeFiles/cs205.dir/flags.make
CMakeFiles/cs205.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ishanverma/Desktop/cs205/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cs205.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cs205.dir/main.cpp.o -c /Users/ishanverma/Desktop/cs205/main.cpp

CMakeFiles/cs205.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cs205.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ishanverma/Desktop/cs205/main.cpp > CMakeFiles/cs205.dir/main.cpp.i

CMakeFiles/cs205.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cs205.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ishanverma/Desktop/cs205/main.cpp -o CMakeFiles/cs205.dir/main.cpp.s

CMakeFiles/cs205.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cs205.dir/main.cpp.o.requires

CMakeFiles/cs205.dir/main.cpp.o.provides: CMakeFiles/cs205.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cs205.dir/build.make CMakeFiles/cs205.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cs205.dir/main.cpp.o.provides

CMakeFiles/cs205.dir/main.cpp.o.provides.build: CMakeFiles/cs205.dir/main.cpp.o


# Object files for target cs205
cs205_OBJECTS = \
"CMakeFiles/cs205.dir/main.cpp.o"

# External object files for target cs205
cs205_EXTERNAL_OBJECTS =

cs205: CMakeFiles/cs205.dir/main.cpp.o
cs205: CMakeFiles/cs205.dir/build.make
cs205: CMakeFiles/cs205.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ishanverma/Desktop/cs205/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cs205"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cs205.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cs205.dir/build: cs205

.PHONY : CMakeFiles/cs205.dir/build

CMakeFiles/cs205.dir/requires: CMakeFiles/cs205.dir/main.cpp.o.requires

.PHONY : CMakeFiles/cs205.dir/requires

CMakeFiles/cs205.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cs205.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cs205.dir/clean

CMakeFiles/cs205.dir/depend:
	cd /Users/ishanverma/Desktop/cs205/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ishanverma/Desktop/cs205 /Users/ishanverma/Desktop/cs205 /Users/ishanverma/Desktop/cs205/cmake-build-debug /Users/ishanverma/Desktop/cs205/cmake-build-debug /Users/ishanverma/Desktop/cs205/cmake-build-debug/CMakeFiles/cs205.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cs205.dir/depend
