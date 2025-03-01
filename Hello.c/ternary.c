#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest;

    // Prompt user for input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number using ternary operators
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Output the result
    printf("The largest number is %d\n", largest);

    return 0;
}
