cmake_minimum_required(VERSION 3.30)
project(largest_prime_factor)

set(CMAKE_CXX_STANDARD 23)

find_library(WAK_MATH_LIBRARY wak_math PATHS "../library/wak_math/cmake-build-release" REQUIRED)

add_executable(largest_prime_factor main.cpp)
target_link_libraries(largest_prime_factor ${WAK_MATH_LIBRARY})