#include <stdio.h>
int main()
{
    int abc[10];
    printf("Enter the value");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &abc[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", abc[i]);
    }
    return 0;
}