// Call by refrence
#include <stdio.h>

void sum(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main()
{
    int a, b;
    printf("Enter the value of A and B \n");
    scanf("%d %d", &a, &b);
    sum(&a, &b);
    printf("After swapping the value of A and B are %d and %d\n ", a, b);
    return 0;
}