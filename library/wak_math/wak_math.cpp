#include "wak_math.h"
#include <vector>

namespace wak_math {

    unsigned long long get_nth_prime(const unsigned long long n) {
        if (n == 1) return 2;
        if (n == 2) return 3;

        std::vector<unsigned long long> primes = {2, 3};
        auto count = 2; // since 2 and 3 are already counted

        for (auto i = 5ULL; count < n; i += 2) {
            bool is_prime = true;
            for (const auto& p : primes) {
                if (p * p > i) break;
                if (i % p == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime) {
                primes.push_back(i);
                ++count;
            }
        }

        return primes[n - 1]; // n-1 because index in vector starts from 0
    }

    /**
     * @brief Get the prime factors of a number.
     *
     * @tparam T
     * @param n
     * @return T
     */
    unsigned long long get_largest_prime_factor(const unsigned long long n) {
        auto largest_prime_factor{n};

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

    unsigned long long reverse_number(const unsigned long long n) {
        auto reverse = 0ULL;
        auto number = n;
        while (number > 0) {
            reverse = reverse * 10 + number % 10;
            number /= 10;
        }
        return reverse;
    }

    unsigned long long sum_of_squares(const unsigned long long n) {
        return n * (n + 1) * (2 * n + 1) / 6;
    }

    unsigned long long square_of_sum(const unsigned long long n) {
        const auto sum = n * (n + 1) / 2;
        return sum * sum;
    }
}
