#include <stdio.h>
int main()
{
    int i, j, k,row;
    printf("Enter the amounts of row");
    scanf("%d", &row);

    for (i = row; i >= 1; i--)
    {
        for (j = i; j < row; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}