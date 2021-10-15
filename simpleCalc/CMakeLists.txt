cmake_minimum_required(VERSION 3.16)
project(simpleCalc)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

add_executable(simpleCalc
        src/main.cpp
        src/calc.cpp
        include/calc.h)

target_link_libraries(simpleCalc pthread)