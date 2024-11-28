#include <iostream>

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int smallest_multiple(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        if (num % i != 0) {
            num++;
            i = 1;
        }
    }
    return num;
}

int main() {
    std::cout << "Smallest multiple for all numbers 1 - 20" << std::endl;
    std::cout << smallest_multiple(20) << std::endl;
    return 0;
}