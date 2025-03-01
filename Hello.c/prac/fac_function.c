#include<stdio.h>
int function(int a){
    if (a == 0 || a == 1) return 1;
    else return function(a-1)*a;
    

}
int main()
{
    int n,i;
    printf("Enter the value  "); 
    scanf("%d",&n);
    printf("%d\n",function(n));
return 0;
}
