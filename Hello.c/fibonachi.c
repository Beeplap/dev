#include <stdio.h>

int main() {
    int n = 100;  // Number of terms to generate
    long long int fib[n];  // Array to store Fibonacci numbers

    // Initialize the first two terms
    fib[0] = 0;
    fib[1] = 1;

    // Generate Fibonacci numbers
    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // Print the Fibonacci sequence
    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%lld ", fib[i]);
    }
    printf("\n");

    return 0;
}
