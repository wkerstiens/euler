#include <iostream>
#include "../library/wak_math/wak_math.h"

using namespace wak_math;

int main() {
    constexpr int n = 10001;
    std::cout << "10001st prime number is: "
                << get_nth_prime(n) << std::endl;
    return 0;
}