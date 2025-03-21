# Install script for directory: /home/fish/Documents/led-blinker

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Autocoders/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/config/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Fw/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Svc/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Os/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Drv/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/CFDP/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/F-Prime/Utils/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Os/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Drv/GpioDriver/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Drv/StreamDriver/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Drv/I2cDriver/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Drv/I2cNodeDriver/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Drv/SpiDriver/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Drv/PwmDriver/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Drv/TcpClient/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Drv/HardwareRateDriver/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Drv/AnalogDriver/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Svc/LifeLed/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Svc/ArduinoTime/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Arduino/Svc/Ports/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/fprime-baremetal/Os/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/fprime-baremetal/Svc/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/Components/cmake_install.cmake")
  include("/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/LedBlinker/cmake_install.cmake")

endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/fish/Documents/led-blinker/build-fprime-automatic-teensy41/sub-build-info-cache/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
