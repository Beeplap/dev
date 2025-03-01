#include<stdio.h>
fib(int n){
    if(n<=1)
        return n;
    else
        return (fib(n-1) + fib(n-2));

}
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }
    
return 0;
}