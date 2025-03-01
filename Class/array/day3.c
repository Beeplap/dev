#include <stdio.h>
int main()
{
    int a[100];
    int n, sum = 0;
    printf("Enter the term ");
    scanf("%d", &n);
    printf("Enter the number ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d", sum);
    return 0;
}