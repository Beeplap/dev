#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    printf("Enter the string");
    gets(a);
    strcpy(b,a);
    // printf("copy of string %s ",strcpy(b,a));
    printf("Copied string %s ",b);
return 0;
}