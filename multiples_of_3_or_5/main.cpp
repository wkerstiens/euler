#include <iostream>

/*
 *  https://projecteuler.net/problem=1
*/

bool is_multiple_of_3_or_5(const int number) {
    return number % 3 == 0 || number % 5 == 0;
}

int main() {
    std::cout << "Find the sum of all the multiples of 3 or 5 below 1000." << std::endl;

    int sum{};
    for (int i = 3; i < 1000; i++)
        if (is_multiple_of_3_or_5(i))
            sum += i;

    std::cout << "The sum of all the multiples of 3 or 5 below 1000 is: " << sum << std::endl;
    return 0;
}



