cmake_minimum_required(VERSION 3.30)
project(summation_of_primes)

set(CMAKE_CXX_STANDARD 23)

find_library(WAK_MATH_LIBRARY wak_math PATHS "../library/wak_math/cmake-build-release" REQUIRED)

add_executable(summation_of_primes main.cpp)

target_link_libraries(summation_of_primes ${WAK_MATH_LIBRARY})
