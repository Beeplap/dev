#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;  
        num /= 10;        
    }
    return sum;
}



int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    result = sumOfDigits(number);

    printf("Sum of digits of %d is %d\n", number, result);

    return 0;
}
