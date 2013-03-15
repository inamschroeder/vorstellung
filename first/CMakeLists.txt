cmake_minimum_required(VERSION 2.8)
project(first)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE HEADER ${CMAKE_SOURCE_DIR}/src/*.h)
	
add_executable(first ${SOURCES} ${HEADER})