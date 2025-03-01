#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number  ");
    scanf("%d",&n);
    for (int i = 10;i; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i);  // Prints the multiplication table for the given number
    }
    
return 0;
}