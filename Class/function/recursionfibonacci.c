#include <stdio.h>


void fibonacci(int a, int b, int n)
{
    if (a > n)
    {
        return;
    }

    printf("%d ", a);

    fibonacci(b, a + b, n);
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    fibonacci(0, 1, n);

    return 0;
}
