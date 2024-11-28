cmake_minimum_required(VERSION 3.30)
project(even_fibonacci_numbers)

set(CMAKE_CXX_STANDARD 20)
aux_source_directory(../library/fibonacci FIBONACCI_SOURCES)
add_executable(even_fibonacci_numbers main.cpp ${FIBONACCI_SOURCES})
