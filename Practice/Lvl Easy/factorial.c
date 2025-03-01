#include<stdio.h>
int factorial(int);

int factorial(int n){
    if (n==0 || n==1) 
    {
      return 1; 
    }
    else{
        return factorial(n-1)*n; 
    }
}
int main()
{
    int a;
    printf("Enter the value to find the factorial of ");
    scanf("%d",&a);
    printf("factorial of %d is %d\n", a, factorial(a));
return 0;
}