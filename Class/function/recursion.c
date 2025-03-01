#include <stdio.h>
int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    return factorial(a - 1) * a;
}
int main()
{
    int i;
    printf("Enter the number to  find factorial of ");
    scanf("%d", &i);
    printf("Factorial of %d is %d", i, factorial(i));
    return 0;
}