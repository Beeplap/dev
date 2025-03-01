#include <stdio.h>
int main()
{
    int num, modulo, modulo_1,num1, sum = 0, sum_1 , end;
    printf("Enter the value to find sum of middle numbers: ");
    scanf("%d", &num);
    modulo_1 = num % 10;

    while (num1 < 10)
    {
        modulo=num1%10;
        sum_1 = modulo / 10;  
        
    }
    
     end = sum - modulo_1;
    printf("Sum of middle numbers is %d\n", end);
    return 0;
}