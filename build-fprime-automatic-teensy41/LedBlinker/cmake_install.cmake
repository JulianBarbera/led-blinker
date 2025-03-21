# Install script for directory: /home/fish/Documents/led-blinker/LedBlinker

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/fish/Documents/led-blinker/build-artifacts")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "1")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/bin" TYPE EXECUTABLE FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/bin/teensy41/LedBlinker.elf")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/bin/LedBlinker.elf" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/bin/LedBlinker.elf")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/home/fish/.arduino15/packages/teensy/tools/teensy-compile/11.3.1/arm/bin/arm-none-eabi-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/bin/LedBlinker.elf")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libconfig.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Cfg.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Types.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Logger.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Obj.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Port.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Time.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Com.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Tlm.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Log.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Cmd.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Prm.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Buffer.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libDrv_ByteStreamDriverModel.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_Sched.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libOs.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Comp.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libArduino_Drv_StreamDriver.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libfprime-baremetal_Os_TaskRunner.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libDrv_Ports.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libComponents_Led.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libArduino_Drv_GpioDriver.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_Cycle.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libArduino_Drv_HardwareRateDriver.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libArduino_Svc_Ports.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libArduino_Svc_ArduinoTime.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_Fatal.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libfprime-baremetal_Svc_FatalHandler.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_Ping.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_CompQueued.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_ActiveLogger.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_BufferManager.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_CmdDispatcher.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libUtils_Hash.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libUtils_Types.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_FramingProtocol.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_Deframer.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libFw_Ports_SuccessCondition.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_Framer.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_PassiveConsoleTextLogger.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_PassiveRateGroup.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_RateGroupDriver.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_SystemResources.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libSvc_TlmChan.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/lib/static" TYPE STATIC_LIBRARY FILES "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/lib/teensy41/libLedBlinker_Top.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "LedBlinker" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/teensy41/LedBlinker/dict" TYPE FILE FILES
    "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/LedBlinker/Top/LedBlinkerTopologyAppDictionary.xml"
    "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/LedBlinker/Top/LedBlinkerTopologyDictionary.json"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/LedBlinker/Top/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/LedBlinker/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
