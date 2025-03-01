//wap input a program find the factor of the product

#include<stdio.h>
int main()
{
    int i=1,j;
    printf("Enter the number to find factor ");
    scanf("%d",&j);
    while (i<=j)
    {
        if (j%i==0)
        {
           printf("%d ",i);
        }
        i++;
    }
    
return 0;
}