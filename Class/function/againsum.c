#include<stdio.h>
int add(int a, int b){
    int sum = a + b;
    printf("The sum of two number is %d\n",sum);
    return 0;
}
int main()
{
    int i,j;
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);
    add(i, j);
return 0;
}