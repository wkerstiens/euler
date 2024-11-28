#include "fibonacci.h"

namespace fibonacci {
    int FibonacciGenerator::next() {
        const int current = a;
        a = b;
        b = current + b;
        return current;
    }

    int FibonacciGenerator::get_nth_fibonacci(const int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return get_nth_fibonacci(n - 1) + get_nth_fibonacci(n - 2);
    }
}