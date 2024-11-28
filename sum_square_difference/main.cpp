#include <iostream>
#include "../library/wak_math/wak_math.h"

using namespace wak_math;

int main() {
    std::cout << "Sum Square difference" << std::endl;
    const auto a = sum_of_squares(100);
    const auto b = square_of_sum(100);
    std::cout << (a >= b ? a - b : b - a) << std::endl;
    return 0;
}