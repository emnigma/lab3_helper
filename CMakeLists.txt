cmake_minimum_required(VERSION 3.15)
project(lab3_helper)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab3_helper
        main.cpp
        node.h
        pointer.h
        tree.h)
