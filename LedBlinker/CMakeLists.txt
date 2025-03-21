#####
# 'LedBlinker' Deployment:
#
# This registers the 'LedBlinker' deployment to the build system. 
# Custom components that have not been added at the project-level should be added to 
# the list below.
#
#####

# Deployment is only compatible with the Arduino platform
restrict_platforms(ArduinoFw)

###
# Topology and Components
###
add_fprime_subdirectory("${CMAKE_CURRENT_LIST_DIR}/Top/")
message(STATUS "C++ Standard: ${CMAKE_CXX_STANDARD}")
# Add custom components to this specific deployment here
# add_fprime_subdirectory("${CMAKE_CURRENT_LIST_DIR}/MyComponent/")


set(SOURCE_FILES "${CMAKE_CURRENT_LIST_DIR}/Main.cpp")
set(MOD_DEPS ${FPRIME_CURRENT_MODULE}/Top)

register_fprime_deployment()

finalize_arduino_executable("${FPRIME_CURRENT_MODULE}")

set_target_properties(Svc_FatalHandler PROPERTIES EXCLUDE_FROM_ALL TRUE) # Temporary to fix bug in F Prime Release v3.5.0
