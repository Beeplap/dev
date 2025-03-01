#include <stdio.h>
int fibonacci(int i, int j, int a)
{
    if (1 >a )
        return;
    printf("%d ", i);
    fibonacci(j, i + j, --a);
}
int main()
{
    int a;
    printf("Enter the number ");
    scanf("%d", &a);
    fibonacci(0, 1, a);
    return 0;
}