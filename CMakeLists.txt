# cmake -H. -Bbuild
# cmake --build build

cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 11)
project(cpp-cmake-circle-ci)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
add_executable(pointTest.x ${PROJECT_SOURCE_DIR}/tests/pointTest.cpp)