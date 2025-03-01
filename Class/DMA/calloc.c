#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,n;
    printf("Enter the size "); 
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    for ( i = 0; i < n; i++)
    {
        printf("Enter an element "); 
        scanf("%d", ptr + i);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    
    
return 0;
}