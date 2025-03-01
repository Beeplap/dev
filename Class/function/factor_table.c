#include <stdio.h>
int factors(int num)
{
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int products(int num)
{
    int n;
    printf("Multiplication Table of %d upto? ", num);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int product;
        product = num * i;
        printf("%d X %d = %d \n", num, i, product);
    }
}
int main()
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    factors(number);
    products(number);
    return 0;
}