#include<stdio.h>
int factorial(int);

int factorial(int n){
    if (n ==0 || n ==1)
    {
        return 1;
    }
    
    return factorial(n-1)*n;
}
int main()
{
    int a;
    printf("Enter the value");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a, factorial(a));
    return 0;
}