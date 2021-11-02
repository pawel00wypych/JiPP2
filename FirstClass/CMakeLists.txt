cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)#szukaj plików nagłówkowych w tym folderze

add_library(FirstClass STATIC
        src/ClassProstopadl.cpp
        src/kula.cpp
        src/FunkcjaKwadratowa.cpp
        src/Student.cpp
        src/Punkt.cpp
        src/Figura.cpp
        src/KonstDest.cpp
        include/ClassProstopadl.h
        include/kula.h
        include/FunkcjaKwadratowa.h
        include/Student.h
        include/Punkt.h
        include/Figura.h
        include/KonstDest.h)





