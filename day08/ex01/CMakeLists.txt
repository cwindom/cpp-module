cmake_minimum_required(VERSION 3.17)
project(ex01)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex01
        span.cpp
        span.hpp
        main.cpp)
