#include<stdio.h>
void sum (int,int); //declaration
 
void sum (int x,int y){
    int c= x+y; 
    printf("sum of two numbers is %d\n",c);
}
int main()
{
    int a,b;
    printf("Ene numbers to sum\n");
    scanf("%d %d",&a,&b);
     sum (a,b);
return 0;
}