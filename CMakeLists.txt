cmake_minimum_required(VERSION 4.0)
project(triangle_number)

set(CMAKE_CXX_STANDARD 20)

add_executable(triangle_number main.cpp
            classes/TriangleNumberCalculator.cpp)
