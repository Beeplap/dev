#include <stdio.h>
int main()
{
    int a,b,c,d;

    // char d[100];
    printf("Enter first number");
    scanf("%d %d %d", &a,&d,&b);
    // printf("Enter second number:");
    // scanf("%d", &b);
    // printf("Enter operation:");
    // scanf((char)"%c", &d);
    switch (d)

    {
        
    case 1:
        c = a + b;
        printf("%d", c);
        break;
    case 2:
        c = a - b;
        printf("%d", c);
        break;
    case 3:
        c = a * b;
        printf("%d", c);
        break;
    case 4:
        c = a / b;
        printf("%d", c);
        break;

    default:
        printf("Invalid");
        break;
    }

    return 0;
}