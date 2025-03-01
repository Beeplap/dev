#include <stdio.h>
int main()
{
    int a,b;
    char ch;

    printf("Enter operation:");
    scanf("%c", &ch);
    
    printf("Enter first number");
    scanf("%d  %d", &a,&b);
    
    switch (ch)
    {
        
    case '+':
       
        printf("%d", a+b);
        break;
    case '-':
        
        printf("%d", a-b);
        break;
    case '*':
        
        printf("%d", a*b);
        break;
    case '/':
       
        printf("%d", a/b);
        break;

    default:
        printf("Invalid");
        break;
    }
    return 0;
}