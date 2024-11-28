cmake_minimum_required(VERSION 3.30)
project(fibonacci)

set(CMAKE_CXX_STANDARD 20)

add_library(fibonacci STATIC fibonacci.cpp)
