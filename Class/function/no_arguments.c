#include<stdio.h>
int sum(){
    int a,b;
    printf("Enter two numbers : "); 
    scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}
int main()
{  
    printf("sum = %d\n",sum());
return 0;
}
