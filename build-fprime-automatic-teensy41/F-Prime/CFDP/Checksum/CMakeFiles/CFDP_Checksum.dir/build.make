# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fish/Documents/led-blinker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41

# Include any dependencies generated for this target.
include F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/flags.make

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/codegen:
.PHONY : F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/codegen

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.obj: F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/flags.make
F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.obj: /home/fish/Documents/led-blinker/lib/fprime/CFDP/Checksum/Checksum.cpp
F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.obj: F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.obj"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/CFDP/Checksum && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xcd234375 -DASSERT_RELATIVE_PATH='"CFDP/Checksum/Checksum.cpp"' -MD -MT F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.obj -MF CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.obj.d -o CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.obj -c /home/fish/Documents/led-blinker/lib/fprime/CFDP/Checksum/Checksum.cpp

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.i"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/CFDP/Checksum && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xcd234375 -DASSERT_RELATIVE_PATH='"CFDP/Checksum/Checksum.cpp"' -E /home/fish/Documents/led-blinker/lib/fprime/CFDP/Checksum/Checksum.cpp > CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.i

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.s"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/CFDP/Checksum && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xcd234375 -DASSERT_RELATIVE_PATH='"CFDP/Checksum/Checksum.cpp"' -S /home/fish/Documents/led-blinker/lib/fprime/CFDP/Checksum/Checksum.cpp -o CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.s

# Object files for target CFDP_Checksum
CFDP_Checksum_OBJECTS = \
"CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.obj"

# External object files for target CFDP_Checksum
CFDP_Checksum_EXTERNAL_OBJECTS =

lib/teensy41/libCFDP_Checksum.a: F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/Checksum.cpp.obj
lib/teensy41/libCFDP_Checksum.a: F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/build.make
lib/teensy41/libCFDP_Checksum.a: F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/teensy41/libCFDP_Checksum.a"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/CFDP/Checksum && $(CMAKE_COMMAND) -P CMakeFiles/CFDP_Checksum.dir/cmake_clean_target.cmake
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/CFDP/Checksum && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CFDP_Checksum.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/build: lib/teensy41/libCFDP_Checksum.a
.PHONY : F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/build

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/clean:
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/CFDP/Checksum && $(CMAKE_COMMAND) -P CMakeFiles/CFDP_Checksum.dir/cmake_clean.cmake
.PHONY : F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/clean

F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/depend:
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fish/Documents/led-blinker /home/fish/Documents/led-blinker/lib/fprime/CFDP/Checksum /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41 /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/CFDP/Checksum /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/CFDP/Checksum/CMakeFiles/CFDP_Checksum.dir/depend

