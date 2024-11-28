cmake_minimum_required(VERSION 3.30)
project(sum_square_difference)

set(CMAKE_CXX_STANDARD 23)

find_library(WAK_MATH_LIBRARY wak_math PATHS "../library/wak_math/cmake-build-release" REQUIRED)

add_executable(sum_square_difference main.cpp)

target_link_libraries(sum_square_difference ${WAK_MATH_LIBRARY})