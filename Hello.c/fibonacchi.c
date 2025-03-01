#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Prompt user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Special cases for 0 or 1 terms
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("%d\n", first);
    } else {
        printf("%d, %d", first, second);

        // Generate the Fibonacci series
        for (int i = 3; i <= n; ++i) {
            next = first + second;
            printf(", %d", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
