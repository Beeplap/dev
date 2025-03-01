#include <stdio.h>
int main()
{
    int arr[5][5];
    int a = 0, b = 0;
    int k = 0, m = 1;
    printf("Enter the matrix \n");
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
            if (arr[i][j] % 2 == 0)
            {
                a += 1;
                k = k+ arr[i][j];
            }
            else
            {
                b += 1;
                m = m* arr[i][j];
            }
        }
        printf("\n");
    }
    if (a)
    {
        printf("There are %d numbers of even numbers" , a);
        printf("And the sum of even numbers is %d", k);
    }
    printf("\nAnd there are %d numbers of odd numbers" , b);
    printf("And the product of odd numbers is %d", m);
    return 0;
}
