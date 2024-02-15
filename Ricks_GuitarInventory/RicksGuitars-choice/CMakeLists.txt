cmake_minimum_required(VERSION 3.27)
project(ooad)

set(CMAKE_CXX_STANDARD 17)

add_executable(ooad main.cpp
        Guitar.h
        Inventory.h)
