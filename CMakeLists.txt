cmake_minimum_required(VERSION 3.5)
project(Circle)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp circle.cpp circle.h distance2d.cpp distance2d.h)
add_executable(Circle ${SOURCE_FILES})
