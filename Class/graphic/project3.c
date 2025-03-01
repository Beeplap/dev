#include<stdio.h>
int main()
{
    int a,prime,n;
    printf("Enter a number");
    scanf("%d", &a);
    
        if (a==1 || a==0 )
        {
            prime = 0;
        }
        else{
            for (int i = 1; i<=a; i++)
    {
            for (int j = 1; j<=i; j++)
            {
               if (i%j == 0)
               {
                prime = 0;
               }
               else{
                prime = 1;
               }
            }
            if (prime==1)
            {
                printf(" %d \n",i);
            }
        
    }
            
            
        }
        
    
    

return 0;
}