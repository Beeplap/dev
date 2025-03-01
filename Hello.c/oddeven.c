#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int largest, smallest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = num1;
    if (num2 > largest)
    {
        largest = num2;
    }
    if (num3 > largest)
    {
        largest = num3;
    }

    smallest = num1;
    if (num2 < smallest)
    {
        smallest = num2;
    }
    if (num3 < smallest)
    {
        smallest = num3;
    }

    printf("The largest number is %d and it is %s.\n", largest, (largest % 2 == 0) ? "even" : "odd");
    printf("The smallest number is %d and it is %s.\n", smallest, (smallest % 2 == 0) ? "even" : "odd");

    return 0;
}
