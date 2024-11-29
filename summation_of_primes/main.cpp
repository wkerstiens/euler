#include <iostream>
#include "../library/wak_math/wak_math.h"

using namespace wak_math;

int main() {
    std::cout <<  sum_primes(2'000'000) << std::endl;
    return 0;
}