#include <stdio.h>

int main() {
    int num, isPrime = 1;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for valid input
    if (num <= 1) {
        printf("The number is neither prime nor composite.\n");
        return 0;
    }

    // Check divisors from 2 to sqrt(num) (optimized)
    for (int i = 2; i*i  <= num; i++) {
        if (num % i == 0) {  // If divisible, it's not prime
            isPrime = 0;
            break;
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is a composite number.\n", num);
    }

    return 0;
}
