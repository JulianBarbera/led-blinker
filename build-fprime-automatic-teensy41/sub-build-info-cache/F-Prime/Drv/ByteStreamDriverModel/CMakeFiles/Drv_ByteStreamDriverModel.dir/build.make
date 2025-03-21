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
CMAKE_BINARY_DIR = /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache

# Include any dependencies generated for this target.
include F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/flags.make

F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/codegen:
.PHONY : F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/codegen

F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.obj: F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/flags.make
F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.obj: /home/fish/Documents/led-blinker/lib/fprime/cmake/empty.cpp
F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.obj: F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.obj"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Drv/ByteStreamDriverModel && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.obj -MF CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.obj.d -o CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.obj -c /home/fish/Documents/led-blinker/lib/fprime/cmake/empty.cpp

F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.i"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Drv/ByteStreamDriverModel && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fish/Documents/led-blinker/lib/fprime/cmake/empty.cpp > CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.i

F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.s"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Drv/ByteStreamDriverModel && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fish/Documents/led-blinker/lib/fprime/cmake/empty.cpp -o CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.s

# Object files for target Drv_ByteStreamDriverModel
Drv_ByteStreamDriverModel_OBJECTS = \
"CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.obj"

# External object files for target Drv_ByteStreamDriverModel
Drv_ByteStreamDriverModel_EXTERNAL_OBJECTS =

lib/teensy41/libDrv_ByteStreamDriverModel.a: F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/__/__/cmake/empty.cpp.obj
lib/teensy41/libDrv_ByteStreamDriverModel.a: F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/build.make
lib/teensy41/libDrv_ByteStreamDriverModel.a: F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/teensy41/libDrv_ByteStreamDriverModel.a"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Drv/ByteStreamDriverModel && $(CMAKE_COMMAND) -P CMakeFiles/Drv_ByteStreamDriverModel.dir/cmake_clean_target.cmake
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Drv/ByteStreamDriverModel && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drv_ByteStreamDriverModel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/build: lib/teensy41/libDrv_ByteStreamDriverModel.a
.PHONY : F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/build

F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/clean:
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Drv/ByteStreamDriverModel && $(CMAKE_COMMAND) -P CMakeFiles/Drv_ByteStreamDriverModel.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/clean

F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/depend:
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fish/Documents/led-blinker /home/fish/Documents/led-blinker/lib/fprime/Drv/ByteStreamDriverModel /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Drv/ByteStreamDriverModel /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Drv/ByteStreamDriverModel/CMakeFiles/Drv_ByteStreamDriverModel.dir/depend

