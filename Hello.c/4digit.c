#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;

    // Prompt user for input
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    // Validate input
    if (num < 1000 || num > 9999) {
        printf("Please enter a valid four-digit number.\n");
        return 1;
    }

    // Find the last digit
    lastDigit = num % 10;

    // Find the first digit
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;

    // Calculate the sum of the first and last digit
    int sum = firstDigit + lastDigit;

    // Output the result
    printf("Sum of the first and last digit: %d\n", sum);

    return 0;
}
