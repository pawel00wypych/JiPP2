cmake_minimum_required(VERSION 3.16)
project(FirstLibCall)

set(CMAKE_CXX_STANDARD 17)

include_directories(../FirstLib/library)

add_executable(FirstLibCall main.cpp)

target_link_libraries(FirstLibCall FirstLib)