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
    return 0;
}