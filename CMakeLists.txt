cmake_minimum_required(VERSION 4.0)
project(triangle_number)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)
FetchContent_Declare(
Catch2
GIT_REPOSITORY https://github.com/catchorg/Catch2.git
GIT_TAG        v3.8.1
)
FetchContent_MakeAvailable(Catch2)

add_executable(triangle_number main.cpp
            classes/TriangleNumberCalculator.cpp)

add_executable(triangle_number_test triangle_number_test.cpp
        classes/TriangleNumberCalculator.cpp)


target_link_libraries(triangle_number_test PRIVATE Catch2::Catch2WithMain)