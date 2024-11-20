# CMakeList.txt : CMake project for 08, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (08 "08.cpp" "08.h" "stastny.cpp" "stastny.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 08 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
