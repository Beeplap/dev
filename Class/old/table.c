#include<stdio.h>
int main()
{
    int i=1,n,a;
    printf("Enter the number ");
    scanf("%d",&n);
    printf("Upto? ");
    scanf("%d",&a);
    while (i<=a)
    {
       printf("%d X %d = %d\n",n,i,i*n); 
       i++;
    }
    
    // for(i=1;i<=10;i++)
    // { printf("%d X %d = %d \n",n,i,i*n); 
    // }
return 0;
}