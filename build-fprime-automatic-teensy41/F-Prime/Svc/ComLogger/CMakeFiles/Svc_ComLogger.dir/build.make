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
include F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/flags.make

F-Prime/Svc/ComLogger/ComLoggerComponentAi.xml: /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/ComLogger.fpp
F-Prime/Svc/ComLogger/ComLoggerComponentAi.xml: /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/Commands.fppi
F-Prime/Svc/ComLogger/ComLoggerComponentAi.xml: /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/Events.fppi
F-Prime/Svc/ComLogger/ComLoggerComponentAi.xml: lib/teensy41/libFw_Cmd.a
F-Prime/Svc/ComLogger/ComLoggerComponentAi.xml: lib/teensy41/libFw_Com.a
F-Prime/Svc/ComLogger/ComLoggerComponentAi.xml: lib/teensy41/libFw_Log.a
F-Prime/Svc/ComLogger/ComLoggerComponentAi.xml: lib/teensy41/libSvc_Ping.a
F-Prime/Svc/ComLogger/ComLoggerComponentAi.xml: lib/teensy41/libFw_CompQueued.a
F-Prime/Svc/ComLogger/ComLoggerComponentAi.xml: lib/teensy41/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ComLoggerComponentAi.xml"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && /home/fish/Documents/led-blinker/fprime-venv/bin/fpp-to-xml -d /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger -i /home/fish/Documents/led-blinker/config/FpConfig.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Cmd/Cmd.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Com/Com.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Log/Log.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Time/Time.fpp,/home/fish/Documents/led-blinker/lib/fprime/Svc/Ping/Ping.fpp /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/ComLogger.fpp -p /home/fish/Documents/led-blinker/lib/fprime,/home/fish/Documents/led-blinker/fprime-arduino,/home/fish/Documents/led-blinker/fprime-baremetal,/home/fish/Documents/led-blinker

F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp: /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/ComLogger.fpp
F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp: /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/Commands.fppi
F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp: /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/Events.fppi
F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp: lib/teensy41/libFw_Cmd.a
F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp: lib/teensy41/libFw_Com.a
F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp: lib/teensy41/libFw_Log.a
F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp: lib/teensy41/libSvc_Ping.a
F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp: lib/teensy41/libFw_CompQueued.a
F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp: lib/teensy41/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ComLoggerComponentAc.cpp, ComLoggerComponentAc.hpp"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && /home/fish/Documents/led-blinker/fprime-venv/bin/fpp-to-cpp -d /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger -i /home/fish/Documents/led-blinker/config/FpConfig.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Cmd/Cmd.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Com/Com.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Log/Log.fpp,/home/fish/Documents/led-blinker/lib/fprime/Fw/Time/Time.fpp,/home/fish/Documents/led-blinker/lib/fprime/Svc/Ping/Ping.fpp /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/ComLogger.fpp -p /home/fish/Documents/led-blinker/lib/fprime,/home/fish/Documents/led-blinker/fprime-arduino,/home/fish/Documents/led-blinker/fprime-baremetal,/home/fish/Documents/led-blinker,/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41

F-Prime/Svc/ComLogger/ComLoggerComponentAc.hpp: F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/ComLogger/ComLoggerComponentAc.hpp

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/codegen:
.PHONY : F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/codegen

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.obj: F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/flags.make
F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.obj: /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/ComLogger.cpp
F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.obj: F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.obj"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x818cae3b -DASSERT_RELATIVE_PATH='"Svc/ComLogger/ComLogger.cpp"' -MD -MT F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.obj -MF CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.obj.d -o CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.obj -c /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/ComLogger.cpp

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.i"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x818cae3b -DASSERT_RELATIVE_PATH='"Svc/ComLogger/ComLogger.cpp"' -E /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/ComLogger.cpp > CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.i

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.s"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x818cae3b -DASSERT_RELATIVE_PATH='"Svc/ComLogger/ComLogger.cpp"' -S /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger/ComLogger.cpp -o CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.s

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.obj: F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/flags.make
F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.obj: F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp
F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.obj: F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.obj"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd6df158d -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp"' -MD -MT F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.obj -MF CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.obj.d -o CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.obj -c /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.i"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd6df158d -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp"' -E /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp > CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.i

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.s"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && /home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xd6df158d -DASSERT_RELATIVE_PATH='"build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp"' -S /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp -o CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.s

# Object files for target Svc_ComLogger
Svc_ComLogger_OBJECTS = \
"CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.obj" \
"CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.obj"

# External object files for target Svc_ComLogger
Svc_ComLogger_EXTERNAL_OBJECTS =

lib/teensy41/libSvc_ComLogger.a: F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLogger.cpp.obj
lib/teensy41/libSvc_ComLogger.a: F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/ComLoggerComponentAc.cpp.obj
lib/teensy41/libSvc_ComLogger.a: F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/build.make
lib/teensy41/libSvc_ComLogger.a: F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/teensy41/libSvc_ComLogger.a"
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && $(CMAKE_COMMAND) -P CMakeFiles/Svc_ComLogger.dir/cmake_clean_target.cmake
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_ComLogger.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/build: lib/teensy41/libSvc_ComLogger.a
.PHONY : F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/build

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/clean:
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger && $(CMAKE_COMMAND) -P CMakeFiles/Svc_ComLogger.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/clean

F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/depend: F-Prime/Svc/ComLogger/ComLoggerComponentAc.cpp
F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/depend: F-Prime/Svc/ComLogger/ComLoggerComponentAc.hpp
F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/depend: F-Prime/Svc/ComLogger/ComLoggerComponentAi.xml
	cd /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fish/Documents/led-blinker /home/fish/Documents/led-blinker/lib/fprime/Svc/ComLogger /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41 /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger /home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : F-Prime/Svc/ComLogger/CMakeFiles/Svc_ComLogger.dir/depend

