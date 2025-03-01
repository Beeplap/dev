#include <stdio.h>
int main()
{
    int modulus, j, sum;
    printf("Enter the value to seprate and add");
    scanf("%d", &j);
    modulus = j % 10;
    while (j > 10)
    {
        j = j / 10;
    }
    sum = modulus + j;
    printf("The sum of even numbers only is %d ", sum);

    return 0;
}