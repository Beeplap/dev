#include<stdio.h>
int main()
{
    int i;
    int *ptr;
    int nprime=0;
    printf("Enter the number to check: ");
    scanf("%d", &i);
    ptr = &i;
    printf("The memory address of the number %d is: %p\n", i , ptr);
    if (*ptr == 0 || *ptr == 1)
    {
       printf("The number is composite\n");
    }
    
    for (int  j= 2; j < *ptr; j++)
    {
        if (*ptr % j == 0)
        {
           nprime++;
           break;
           
        }
       
    }
    if (nprime == 0)
    {
        printf("The number is prime\n");
    }
    else{
        printf("The number is composite\n");
    }
    
return 0;
}