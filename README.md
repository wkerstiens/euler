# euler
Solutions to problems Euler written in C++
----
find_library(WAK_MATH_LIBRARY wak_math PATHS "../library/wak_math/cmake-build-release" REQUIRED)

add_executable(largest_prime_factor main.cpp)

target_link_libraries(largest_prime_factor ${WAK_MATH_LIBRARY})
