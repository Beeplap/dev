#include <stdio.h>
int main()
{
    int i, j,row;
    row=5;

    for (i = 1; i <= row; i++)
    {
        for (j = i; j <= row; j++)
        {
            if (j <= row -i)
            {
                printf(" ");
            }
            else{
                printf("*");
            }  
        }
        printf("\n");
    }

    return 0;
}