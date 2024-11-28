cmake_minimum_required(VERSION 3.30)
project(nth_prime)

set(CMAKE_CXX_STANDARD 23)
find_library(WAK_MATH_LIBRARY wak_math PATHS "../library/wak_math/cmake-build-release" REQUIRED)

add_executable(nth_prime main.cpp)

target_link_libraries(nth_prime ${WAK_MATH_LIBRARY})
