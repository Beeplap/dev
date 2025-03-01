//wap input a program find the factor of the product

#include<stdio.h>
int main()
{
    int j;
    printf("Enter the number to find factor ");
    scanf("%d",&j);
   for (int i = 1; i <= j; i++)
   {
    if (j%i==0)
        {
           printf("%d ",i);
        }
       
   }
   
    
return 0;
}