#include<stdio.h>
int main()
{
    int n,a=1;
    printf("ENter the value of N  ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a *= i;
    }
    printf("The factorial of %d is %d\n",n,a);
return 0;
}