#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], b[10], c[20];
    printf("Enter a first name: ");
    gets(a);
    printf("Enter the second name ");
    gets(b);
   
    printf("The name is: %s\n", strcat(a ,b));
    return 0;
}