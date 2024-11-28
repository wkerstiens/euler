#include "wak_math.h"

#include <cmath>

namespace wak_math {
    /**
     * @brief Get the prime factors of a number.
     *
     * @tparam T
     * @param n
     * @return T
     */
    unsigned long long get_largest_prime_factor(const unsigned long long n) {
        auto largest_prime_factor {n};

        /*
         * largest_prime_factor can be represented as factor * other_factor
         * where factor <= other_factor, therefore factor <= sqrt(largest_prime_factor).
         * We can iterate from 2 to sqrt(largest_prime_factor) and divide largest_prime_factor by i
         * until largest_prime_factor is not divisible by i.
         * This way we can find the largest prime factor.
         */
        for (auto i = 2ULL; i * i <= largest_prime_factor; ++i) {
            while (largest_prime_factor % i == 0 && largest_prime_factor != i)
                largest_prime_factor /= i;
        }
        return largest_prime_factor;
    }

}
