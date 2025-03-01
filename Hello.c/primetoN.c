#include <stdio.h>

int main()
{
    int N, isPrime;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N < 2)
    {
        printf("There are no prime numbers less than or equal to %d.\n", N);
    }
    else
    {
        printf("Prime numbers from 1 to %d are: ", N);
        for (int num = 2; num <= N; num++)
        {
            isPrime = 1; 
            for (int i = 2; i * i <= num; i++)
            {
                if (num % i == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
            {
                printf("%d ", num);
            }
        }
        printf("\n");
    }

    return 0;
}
