#include <stdio.h>
int main()
{
    char a[10];
    int i = 0;
    printf("Enter a string: ");
    gets(a);
    while (a[i] != '\0')
    {
        printf("\n %c", a[i++]);
    }
    
    
    return 0;
}