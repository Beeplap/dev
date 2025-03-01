#include <stdio.h>

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate LCM using the relationship between GCD and LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Prompt user for input
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Validate input
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1;
    }

    int gcd_result = gcd(num1, num2);
    int lcm_result = lcm(num1, num2);

    // Output the results
    printf("GCD of %d and %d is %d\n", num1, num2, gcd_result);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm_result);

    return 0;
}

