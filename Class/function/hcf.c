#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return hcf(b, a % b);
    }
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2, gcd_result, lcm_result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
        return 1; 
    }

    gcd_result = hcf(num1, num2);
    lcm_result = lcm(num1, num2);

    printf("HCF of %d and %d is %d\n", num1, num2, gcd_result);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm_result);

    return 0;
}
