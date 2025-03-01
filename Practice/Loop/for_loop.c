#include<stdio.h>
int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("I am stupid %d \n ", i);
    }
    
return 0;
}