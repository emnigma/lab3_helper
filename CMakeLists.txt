cmake_minimum_required(VERSION 3.16)
project(habr)

set(CMAKE_CXX_STANDARD 17)

add_executable(habr main.cpp node.h tree.h)