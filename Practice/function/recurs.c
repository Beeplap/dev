#include<stdio.h>
int recursion(int a, int b, int c)
{
    if (a >= c) return 0;
    
    printf("%d ", a);
    recursion(b, a+b, c);
    
}
int main()
{
    int i;
    printf("Enter the number ");
    scanf("%d", &i);
    recursion(0, 1, i);

return 0;
}