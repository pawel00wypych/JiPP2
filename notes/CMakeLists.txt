cmake_minimum_required(VERSION 3.16)

project(note)
include_directories(include)

add_executable(note src/main.cpp src/Note.cpp)