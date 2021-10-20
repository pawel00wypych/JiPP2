cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

include_directories(library)#szukaj plików nagłówkowych w tym folderze

add_library(FirstLib STATIC src/lib.cpp library/lib.h)




