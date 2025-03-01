#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
     a = a + b;
     b = a - b;
     a = a - b;
     printf("The swapped value of a is %d and the value of b is %d",a,b);
return 0;
}