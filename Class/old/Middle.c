#include <stdio.h>
int main()
{
    int num, modulo, modulo_1,num1, sum = 0, sum_1 , end;
    printf("Enter the value to find sum of middle numbers: ");
    scanf("%d", &num);
    modulo_1 = num % 10;
    num1 = num - modulo_1;
    
    while (num> 10)
    {
        modulo= num1 % 10;
        num = num1 / 10;
        sum = sum + modulo;
    }
    // sum_1 = modulo_1 + num1;

    // while (num > 0)
    // {
    //     modulo = num % 10;
    //     num = num / 10;
    //     sum += modulo;
    // }
     end = sum ;
    printf("Sum of middle numbers is %d\n", end);
    return 0;
}