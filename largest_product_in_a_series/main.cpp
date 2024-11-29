#include <iostream>

// Find the greatest product of thirteen consecutive digits in the 1000-digit number.

unsigned long long largest_product_in_series(const char *series, const size_t series_length, const int consecutive_digits) {
    unsigned long long max_product = 0;
    unsigned long long product = 1;
    int zero_count = 0;

    // Calculate the product of the first `consecutive_digits` digits
    for (int i = 0; i < series_length; ++i) {
        if (const auto digit = series[i] - '0'; digit == 0)
            zero_count++;
        else
            product *= digit;

        // Once we have a full window (or if we find a zero)
        if (i >= consecutive_digits) {
            if (const auto first_digit = series[i - consecutive_digits] - '0'; first_digit == 0)
                zero_count--;
            else
                product /= first_digit;
        }

        // If there are zeroes in the current window, the product should be reset.
        if (zero_count == 0 && i >= consecutive_digits - 1)
            max_product = std::max(max_product, product);
    }

    return max_product;
}

int main() {
    const auto series = "73167176531330624919225119674426574742355349194934"
            "96983520312774506326239578318016984801869478851843"
            "85861560789112949495459501737958331952853208805511"
            "12540698747158523863050715693290963295227443043557"
            "66896648950445244523161731856403098711121722383113"
            "62229893423380308135336276614282806444486645238749"
            "30358907296290491560440772390713810515859307960866"
            "70172427121883998797908792274921901699720888093776"
            "65727333001053367881220235421809751254540594752243"
            "52584907711670556013604839586446706324415722155397"
            "53697817977846174064955149290862569321978468622482"
            "83972241375657056057490261407972968652414535100474"
            "82166370484403199890008895243450658541227588666881"
            "16427171479924442928230863465674813919123162824586"
            "1786645835912456652976545682848912883142607690042"
            "24219022671055626321111109370544217506941658960408"
            "07198403850962455444362981230987879927244284909188"
            "84580156166097919133875499200524063689912560717606"
            "05886116467109405077541002256983155200055935729725"
            "71636269561882670428252483600823257530420752963450";

    std::cout << "Largest product in a series: "
            << largest_product_in_series(series, std::strlen(series), 13) << std::endl;

    return 0;
}
