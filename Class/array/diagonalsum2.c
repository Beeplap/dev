#include <stdio.h>

int main()
{
    int arr[5][5];
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", arr[i][j]);

            if (i == j)
            {
                sum += arr[i][j];
            }
        }
        printf("\n");
    }

    printf("The sum of left diagonal matrix is %d\n", sum);

    return 0;
}
