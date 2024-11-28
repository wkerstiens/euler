#ifndef FIBONACCI_LIBRARY_H
#define FIBONACCI_LIBRARY_H

namespace fibonacci {
    class FibonacciGenerator {
    public:
        FibonacciGenerator() : a(0), b(1) {}
        FibonacciGenerator(int a, int b) : a(a), b(b) {}
        int next();
        static int get_nth_fibonacci(int n);

    private:
        int a, b;
    };
}



#endif //FIBONACCI_LIBRARY_H