cmake_minimum_required(VERSION 3.16)

project(WorkoutLogger)
include_directories(include)

add_executable(WorkoutLogger src/main.cpp
        src/Menu.cpp
        src/Error.cpp
        src/Register.cpp
        src/Login.cpp)