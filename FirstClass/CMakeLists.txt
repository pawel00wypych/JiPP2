cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)#szukaj plików nagłówkowych w tym folderze

add_library(FirstClass STATIC src/ClassProstopadl.cpp include/ClassProstopadl.h)




