#include<stdio.h>
int sum(int a){
    if ( a == 1) 
    {
        return 1;

    }
    else return sum(a-1)+a;
    
}
int main()
{
    int i;
     printf("Enter the number  ");
     scanf("%d",&i);
     printf("Sum of natural numbers upto %d is %d",i,sum(i));
return 0;
}