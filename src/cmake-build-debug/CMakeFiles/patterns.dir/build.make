# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yuzhw/CLionProjects/patterns/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yuzhw/CLionProjects/patterns/src/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/patterns.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/patterns.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/patterns.dir/flags.make

CMakeFiles/patterns.dir/prototype.cpp.o: CMakeFiles/patterns.dir/flags.make
CMakeFiles/patterns.dir/prototype.cpp.o: ../prototype.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuzhw/CLionProjects/patterns/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/patterns.dir/prototype.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/patterns.dir/prototype.cpp.o -c /Users/yuzhw/CLionProjects/patterns/src/prototype.cpp

CMakeFiles/patterns.dir/prototype.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/patterns.dir/prototype.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzhw/CLionProjects/patterns/src/prototype.cpp > CMakeFiles/patterns.dir/prototype.cpp.i

CMakeFiles/patterns.dir/prototype.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/patterns.dir/prototype.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzhw/CLionProjects/patterns/src/prototype.cpp -o CMakeFiles/patterns.dir/prototype.cpp.s

CMakeFiles/patterns.dir/builder-pattern.cpp.o: CMakeFiles/patterns.dir/flags.make
CMakeFiles/patterns.dir/builder-pattern.cpp.o: ../builder-pattern.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuzhw/CLionProjects/patterns/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/patterns.dir/builder-pattern.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/patterns.dir/builder-pattern.cpp.o -c /Users/yuzhw/CLionProjects/patterns/src/builder-pattern.cpp

CMakeFiles/patterns.dir/builder-pattern.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/patterns.dir/builder-pattern.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzhw/CLionProjects/patterns/src/builder-pattern.cpp > CMakeFiles/patterns.dir/builder-pattern.cpp.i

CMakeFiles/patterns.dir/builder-pattern.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/patterns.dir/builder-pattern.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzhw/CLionProjects/patterns/src/builder-pattern.cpp -o CMakeFiles/patterns.dir/builder-pattern.cpp.s

CMakeFiles/patterns.dir/codebuilder.cpp.o: CMakeFiles/patterns.dir/flags.make
CMakeFiles/patterns.dir/codebuilder.cpp.o: ../codebuilder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuzhw/CLionProjects/patterns/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/patterns.dir/codebuilder.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/patterns.dir/codebuilder.cpp.o -c /Users/yuzhw/CLionProjects/patterns/src/codebuilder.cpp

CMakeFiles/patterns.dir/codebuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/patterns.dir/codebuilder.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzhw/CLionProjects/patterns/src/codebuilder.cpp > CMakeFiles/patterns.dir/codebuilder.cpp.i

CMakeFiles/patterns.dir/codebuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/patterns.dir/codebuilder.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzhw/CLionProjects/patterns/src/codebuilder.cpp -o CMakeFiles/patterns.dir/codebuilder.cpp.s

CMakeFiles/patterns.dir/specification-pattern.cpp.o: CMakeFiles/patterns.dir/flags.make
CMakeFiles/patterns.dir/specification-pattern.cpp.o: ../specification-pattern.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuzhw/CLionProjects/patterns/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/patterns.dir/specification-pattern.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/patterns.dir/specification-pattern.cpp.o -c /Users/yuzhw/CLionProjects/patterns/src/specification-pattern.cpp

CMakeFiles/patterns.dir/specification-pattern.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/patterns.dir/specification-pattern.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuzhw/CLionProjects/patterns/src/specification-pattern.cpp > CMakeFiles/patterns.dir/specification-pattern.cpp.i

CMakeFiles/patterns.dir/specification-pattern.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/patterns.dir/specification-pattern.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuzhw/CLionProjects/patterns/src/specification-pattern.cpp -o CMakeFiles/patterns.dir/specification-pattern.cpp.s

# Object files for target patterns
patterns_OBJECTS = \
"CMakeFiles/patterns.dir/prototype.cpp.o" \
"CMakeFiles/patterns.dir/builder-pattern.cpp.o" \
"CMakeFiles/patterns.dir/codebuilder.cpp.o" \
"CMakeFiles/patterns.dir/specification-pattern.cpp.o"

# External object files for target patterns
patterns_EXTERNAL_OBJECTS =

patterns: CMakeFiles/patterns.dir/prototype.cpp.o
patterns: CMakeFiles/patterns.dir/builder-pattern.cpp.o
patterns: CMakeFiles/patterns.dir/codebuilder.cpp.o
patterns: CMakeFiles/patterns.dir/specification-pattern.cpp.o
patterns: CMakeFiles/patterns.dir/build.make
patterns: /usr/local/lib/libboost_system-mt.dylib
patterns: /usr/local/lib/libboost_filesystem-mt.dylib
patterns: CMakeFiles/patterns.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yuzhw/CLionProjects/patterns/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable patterns"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/patterns.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/patterns.dir/build: patterns

.PHONY : CMakeFiles/patterns.dir/build

CMakeFiles/patterns.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/patterns.dir/cmake_clean.cmake
.PHONY : CMakeFiles/patterns.dir/clean

CMakeFiles/patterns.dir/depend:
	cd /Users/yuzhw/CLionProjects/patterns/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yuzhw/CLionProjects/patterns/src /Users/yuzhw/CLionProjects/patterns/src /Users/yuzhw/CLionProjects/patterns/src/cmake-build-debug /Users/yuzhw/CLionProjects/patterns/src/cmake-build-debug /Users/yuzhw/CLionProjects/patterns/src/cmake-build-debug/CMakeFiles/patterns.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/patterns.dir/depend

