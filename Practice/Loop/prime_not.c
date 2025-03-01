#include <stdio.h>
int main()
{
    int i, j, not_prime = 0;
    printf("The prime number for : ");
    scanf("%d", &j);
    if (j == 0 || j == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0 && j != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }

    if (not_prime)
    {
        printf("%d is not a prime number.\n", j);
    }
    else
    {
        printf("%d is a prime number.\n", j);
    }

    return 0;
}