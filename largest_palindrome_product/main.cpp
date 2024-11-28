#include <iostream>
#include "../library/wak_math/wak_math.h"

bool is_palindrome(const int number) {
    return number == wak_math::reverse_number(number);
}

int largest_palindrome() {
    int largest = 0;
    for (int i = 999; i >= 100; --i) {
        // starts j from i to reduce redundant checks
        for (int j = i; j >= 100; --j) {
            const int product = i * j;
            // No need to proceed if product is less than or equal to the largest palindrome found
            if (product <= largest)
                break;

            if (is_palindrome(product)) {
                largest = product;
            }

        }
    }
    return largest;
}

int main() {
    std::cout << "Find the largest palindrome made from the product of two 3-digit numbers." << std::endl;
    std::cout << "Result: " << largest_palindrome() << std::endl;
    return 0;
}
