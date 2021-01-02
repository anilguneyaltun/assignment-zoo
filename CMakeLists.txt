cmake_minimum_required(VERSION 3.17)
project(assingment3)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(assingment3
        animal.cpp
        animal.h
        main.cpp
        zoo.cpp
        zoo.h)
