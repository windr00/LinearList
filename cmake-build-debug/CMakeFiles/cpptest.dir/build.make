# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_SOURCE_DIR = /Users/windr/Desktop/LinearList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/windr/Desktop/LinearList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpptest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpptest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpptest.dir/flags.make

CMakeFiles/cpptest.dir/main.cpp.o: CMakeFiles/cpptest.dir/flags.make
CMakeFiles/cpptest.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/windr/Desktop/LinearList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpptest.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpptest.dir/main.cpp.o -c /Users/windr/Desktop/LinearList/main.cpp

CMakeFiles/cpptest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpptest.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/windr/Desktop/LinearList/main.cpp > CMakeFiles/cpptest.dir/main.cpp.i

CMakeFiles/cpptest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpptest.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/windr/Desktop/LinearList/main.cpp -o CMakeFiles/cpptest.dir/main.cpp.s

CMakeFiles/cpptest.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cpptest.dir/main.cpp.o.requires

CMakeFiles/cpptest.dir/main.cpp.o.provides: CMakeFiles/cpptest.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpptest.dir/build.make CMakeFiles/cpptest.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cpptest.dir/main.cpp.o.provides

CMakeFiles/cpptest.dir/main.cpp.o.provides.build: CMakeFiles/cpptest.dir/main.cpp.o


# Object files for target cpptest
cpptest_OBJECTS = \
"CMakeFiles/cpptest.dir/main.cpp.o"

# External object files for target cpptest
cpptest_EXTERNAL_OBJECTS =

cpptest: CMakeFiles/cpptest.dir/main.cpp.o
cpptest: CMakeFiles/cpptest.dir/build.make
cpptest: CMakeFiles/cpptest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/windr/Desktop/LinearList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cpptest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpptest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpptest.dir/build: cpptest

.PHONY : CMakeFiles/cpptest.dir/build

CMakeFiles/cpptest.dir/requires: CMakeFiles/cpptest.dir/main.cpp.o.requires

.PHONY : CMakeFiles/cpptest.dir/requires

CMakeFiles/cpptest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpptest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpptest.dir/clean

CMakeFiles/cpptest.dir/depend:
	cd /Users/windr/Desktop/LinearList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/windr/Desktop/LinearList /Users/windr/Desktop/LinearList /Users/windr/Desktop/LinearList/cmake-build-debug /Users/windr/Desktop/LinearList/cmake-build-debug /Users/windr/Desktop/LinearList/cmake-build-debug/CMakeFiles/cpptest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpptest.dir/depend

