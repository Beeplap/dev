#include <stdio.h>

int main() {
    int num, count = 0;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num; // Convert to positive for digit counting
    }

    // Count the number of digits
    if (num == 0) {
        count = 1; // Special case for 0
    } else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    // Output the result
    printf("Number of digits: %d\n", count);

    return 0;
}
