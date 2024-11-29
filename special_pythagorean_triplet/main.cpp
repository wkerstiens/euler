#include <iostream>

struct Triangle {
    explicit Triangle(const int sum = 1000) : a(3), b(4), c(5), sum(sum) { }

    int a;
    int b;
    int c;
    int sum;

    void set_c() {
        c = sum - a - b;
    }

    [[nodiscard]] bool is_valid() const {
        return a * a + b * b == c * c;
    }
};

bool find_special_pythagorean_triplet(Triangle &triangle) {
    for (triangle.a = 1; triangle.a < triangle.sum / 3; ++triangle.a) {
        for (triangle.b = triangle.a + 1; triangle.b < triangle.sum/2; ++triangle.b) {
            triangle.set_c();
            if (triangle.is_valid()) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::cout << "Special Pythagorean Triplet" << std::endl;
    if (Triangle triangle{}; find_special_pythagorean_triplet(triangle)) {
        std::cout << "a: " << triangle.a << std::endl;
        std::cout << "b: " << triangle.b << std::endl;
        std::cout << "c: " << triangle.c << std::endl;
        std::cout << "Product: " << triangle.a * triangle.b * triangle.c << std::endl;
    } else {
        std::cout << "No special Pythagorean triplet found" << std::endl;
    }
    std::cout << "" << std::endl;
    return 0;
}
