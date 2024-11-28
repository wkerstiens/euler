#include <iostream>
#include "../library/wak_math/wak_math.h"

using namespace wak_math;

int main() {
    auto number = 0Ull;
    std::cout << "Largest Prime Factor of: ";
    std::cin >> number;

    // used in euler test
    // const unsigned long long n = 600'851'475'143;

    std::cout << "Largest prime factor: " << get_largest_prime_factor(number) << std::endl;
    return 0;
}
