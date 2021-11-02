cmake_minimum_required(VERSION 3.16)
project(FirstClassCall)

set(CMAKE_CXX_STANDARD 17)

include_directories(../FirstClass/include)

add_executable(FirstClassCall main.cpp)

target_link_libraries(FirstClassCall FirstClass)