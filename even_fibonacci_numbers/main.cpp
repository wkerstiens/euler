#include <iostream>
#include "../library/fibonacci/fibonacci.h"


int main() {
    std::cout << "Even Fibonacci Numbers" << std::endl;
    FibonacciGenerator fibonacci_generator {1,2};
    int sum = 0;

    for (int next = fibonacci_generator.next(); next < 4'000'000; next = fibonacci_generator.next()) {
        if (next % 2 == 0) sum += next;
    }

    std::cout << sum << std::endl;

    return 0;
}