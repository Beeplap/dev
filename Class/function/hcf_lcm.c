#include <stdio.h>

int main()
{
    int num1, num2, original_num1, original_num2, hcf, lcm, remainder;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("Please enter positive integers.\n");
        return 1;
    }

    original_num1 = num1;
    original_num2 = num2;

    while (num2 != 0)
    {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    hcf = num1;

    lcm = (original_num1 * original_num2) / hcf;

    printf("HCF of %d and %d is %d\n", original_num1, original_num2, hcf);
    printf("LCM of %d and %d is %d\n", original_num1, original_num2, lcm);

    return 0;
}
