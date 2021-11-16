cmake_minimum_required(VERSION 3.16)

project(node)
include_directories(include)

add_executable(node src/Node.cpp src/main.cpp)