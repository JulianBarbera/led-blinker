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
include F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/flags.make

F-Prime/Svc/PrmDb/PrmDbComponentAi.xml: /home/fish/Documents/led-blinker/lib/fprime/Svc/PrmDb/PrmDb.fpp
F-Prime/Svc/PrmDb/PrmDbComponentAi.xml: lib/teensy41/libFw_Cmd.a
F-Prime/Svc/PrmDb/PrmDbComponentAi.xml: lib/teensy41/libFw_Log.a
F-Prime/Svc/PrmDb/PrmDbComponentAi.xml: lib/teensy41/libFw_Prm.a
F-Prime/Svc/PrmDb/PrmDbComponentAi.xml: lib/teensy41/libSvc_Ping.a
F-Prime/Svc/PrmDb/PrmDbComponentAi.xml: lib/teensy41/libFw_CompQueued.a
F-Prime/Svc/PrmDb/PrmDbComponentAi.xml: lib/teensy41/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating PrmDbComponentAi.xml, PrmDb_PrmReadErrorEnumAi.xml, PrmDb_PrmWriteErrorEnumAi.xml"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/Documents/led-blinker/fprime-venv/bin/fpp-to-xml -d /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb -i /home/fish/Documents/led-blinker/config/FpConfig.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Cmd/Cmd.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Log/Log.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Prm/Prm.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Time/Time.fpp,/home/fish/Documents/led-blinker/lib/fprime/Svc/Ping/Ping.fpp /home/fish/Documents/led-blinker/lib/fprime/Svc/PrmDb/PrmDb.fpp -p /home/fish/Documents/led-blinker/lib/fprime,/home/fish/Documents/led-blinker/fprime-arduino,/home/fish/Documents/led-blinker/fprime-baremetal,/home/fish/Documents/led-blinker

F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAi.xml: F-Prime/Svc/PrmDb/PrmDbComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAi.xml

F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAi.xml: F-Prime/Svc/PrmDb/PrmDbComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAi.xml

F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp: /home/fish/Documents/led-blinker/lib/fprime/Svc/PrmDb/PrmDb.fpp
F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp: lib/teensy41/libFw_Cmd.a
F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp: lib/teensy41/libFw_Log.a
F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp: lib/teensy41/libFw_Prm.a
F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp: lib/teensy41/libSvc_Ping.a
F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp: lib/teensy41/libFw_CompQueued.a
F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp: lib/teensy41/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating PrmDbComponentAc.cpp, PrmDbComponentAc.hpp, PrmDb_PrmReadErrorEnumAc.cpp, PrmDb_PrmReadErrorEnumAc.hpp, PrmDb_PrmWriteErrorEnumAc.cpp, PrmDb_PrmWriteErrorEnumAc.hpp"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/Documents/led-blinker/fprime-venv/bin/fpp-to-cpp -d /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb -i /home/fish/Documents/led-blinker/config/FpConfig.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Cmd/Cmd.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Log/Log.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Prm/Prm.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Time/Time.fpp,/home/fish/Documents/led-blinker/lib/fprime/Svc/Ping/Ping.fpp /home/fish/Documents/led-blinker/lib/fprime/Svc/PrmDb/PrmDb.fpp -p /home/fish/Documents/led-blinker/lib/fprime,/home/fish/Documents/led-blinker/fprime-arduino,/home/fish/Documents/led-blinker/fprime-baremetal,/home/fish/Documents/led-blinker,/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41

F-Prime/Svc/PrmDb/PrmDbComponentAc.hpp: F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PrmDb/PrmDbComponentAc.hpp

F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.cpp: F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.cpp

F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.hpp: F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.hpp

F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.cpp: F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.cpp

F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.hpp: F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.hpp

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/codegen:
.PHONY : F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/codegen

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.obj: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/flags.make
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.obj: /home/fish/Documents/led-blinker/lib/fprime/Svc/PrmDb/PrmDbImpl.cpp
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.obj: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.obj"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xda6ca482 -DASSERT_RELATIVE_PATH='"Svc/PrmDb/PrmDbImpl.cpp"' -MD -MT F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.obj -MF CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.obj.d -o CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.obj -c /home/fish/Documents/led-blinker/lib/fprime/Svc/PrmDb/PrmDbImpl.cpp

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.i"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xda6ca482 -DASSERT_RELATIVE_PATH='"Svc/PrmDb/PrmDbImpl.cpp"' -E /home/fish/Documents/led-blinker/lib/fprime/Svc/PrmDb/PrmDbImpl.cpp > CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.i

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.s"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xda6ca482 -DASSERT_RELATIVE_PATH='"Svc/PrmDb/PrmDbImpl.cpp"' -S /home/fish/Documents/led-blinker/lib/fprime/Svc/PrmDb/PrmDbImpl.cpp -o CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.s

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.obj: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/flags.make
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.obj: F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.obj: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.obj"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0a5bdec2 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp"' -MD -MT F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.obj -MF CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.obj.d -o CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.obj -c /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.i"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0a5bdec2 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp"' -E /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp > CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.i

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.s"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x0a5bdec2 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp"' -S /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp -o CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.s

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.obj: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/flags.make
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.obj: F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.cpp
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.obj: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.obj"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4ab9b37e -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.cpp"' -MD -MT F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.obj -MF CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.obj.d -o CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.obj -c /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.cpp

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.i"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4ab9b37e -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.cpp"' -E /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.cpp > CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.i

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.s"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4ab9b37e -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.cpp"' -S /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.cpp -o CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.s

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.obj: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/flags.make
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.obj: F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.cpp
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.obj: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.obj"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xae93e5e3 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.cpp"' -MD -MT F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.obj -MF CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.obj.d -o CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.obj -c /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.cpp

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.i"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xae93e5e3 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.cpp"' -E /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.cpp > CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.i

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.s"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xae93e5e3 -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.cpp"' -S /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.cpp -o CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.s

# Object files for target Svc_PrmDb
Svc_PrmDb_OBJECTS = \
"CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.obj" \
"CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.obj" \
"CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.obj" \
"CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.obj"

# External object files for target Svc_PrmDb
Svc_PrmDb_EXTERNAL_OBJECTS =

lib/teensy41/libSvc_PrmDb.a: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbImpl.cpp.obj
lib/teensy41/libSvc_PrmDb.a: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDbComponentAc.cpp.obj
lib/teensy41/libSvc_PrmDb.a: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmReadErrorEnumAc.cpp.obj
lib/teensy41/libSvc_PrmDb.a: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/PrmDb_PrmWriteErrorEnumAc.cpp.obj
lib/teensy41/libSvc_PrmDb.a: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/build.make
lib/teensy41/libSvc_PrmDb.a: F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library ../../../lib/teensy41/libSvc_PrmDb.a"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && $(CMAKE_COMMAND) -P CMakeFiles/Svc_PrmDb.dir/cmake_clean_target.cmake
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_PrmDb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/build: lib/teensy41/libSvc_PrmDb.a
.PHONY : F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/build

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/clean:
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb && $(CMAKE_COMMAND) -P CMakeFiles/Svc_PrmDb.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/clean

F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend: F-Prime/Svc/PrmDb/PrmDbComponentAc.cpp
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend: F-Prime/Svc/PrmDb/PrmDbComponentAc.hpp
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend: F-Prime/Svc/PrmDb/PrmDbComponentAi.xml
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend: F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.cpp
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend: F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAc.hpp
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend: F-Prime/Svc/PrmDb/PrmDb_PrmReadErrorEnumAi.xml
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend: F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.cpp
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend: F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAc.hpp
F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend: F-Prime/Svc/PrmDb/PrmDb_PrmWriteErrorEnumAi.xml
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fish/Documents/led-blinker /home/fish/Documents/led-blinker/lib/fprime/Svc/PrmDb /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41 /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/PrmDb/CMakeFiles/Svc_PrmDb.dir/depend

