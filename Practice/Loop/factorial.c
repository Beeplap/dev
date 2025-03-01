#include<stdio.h>
int main()
{
    int i,f;
    int product=1;
    printf("Find factorial of?");
    scanf("%d",&f);
    for (int i = 1; i <= f; i++)
    {
       product = i*product;
    }
    printf("factorial of %d is %d \n",f,product);
return 0;
}