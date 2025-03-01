//Call by value
#include<stdio.h>
 
int sum (int a,int b){
    a += 5;
    b = 5;
    printf("At first the numbers are %d and %d \n",a,b);
    
}
int main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
     sum (a,b);
     printf("At second the numbers are same as input, %d and %d\n",a,b);
     
}