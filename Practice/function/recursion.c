#include<stdio.h>

int factorial(int);
int factorial(int n){
    if (n==0 || n==1) 
    {
        return 1;
    }
    return factorial(n-1)*n;
}
int main()
{
    int a ;
    printf("Factorial of ? ");
    scanf("%d",&a);
    printf("The factorial is %d\n", factorial(a));
return 0;
}