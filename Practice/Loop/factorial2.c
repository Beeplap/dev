#include<stdio.h>
int main()
{
    int value, product=1;
    printf("Enter the value to find the factorial of");
    scanf("%d", &value);
    for (int i = 1; i <= value; i++)
    {
        product = i*product;
    }
    printf("The factorial of %d is %d\n",value,product);
return 0;
}