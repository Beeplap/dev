#include<stdio.h>
int sum(int x) 
{
    int result = 0;
    for (int i = 1; i <= x; i++)
       { 
        if (i == 4 || i == 5)
        {
            continue;
        }
        result += i;
       }
    return result;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int i=sum(x);
    printf("The sum of numbers from 1 to %d is: %d\n",x,i);
return 0;
}