cmake_minimum_required(VERSION 3.20)

project(Leetcode LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(leetcode
        solutions/cpp/combine_array_88.cpp
        solutions/cpp/catch_the_rain_42.cpp
)

