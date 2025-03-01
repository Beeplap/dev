#include<stdio.h>
int main()
{
    char a[10],b[10],c[20];
    int i=0,j=0;
    printf("Enter a first name: ");
    gets(a);

    printf("Enter the second name ");
    gets(b);
    while (a[i] != '\0')
    {
        c[i] = a[i];
        i++;
    }
    while (b[i] != '\0')
    {
        c[i] = b[j];
        j++;
        i++;
    }
    c[i] = '\0';
    printf("The combined name is: %s\n", c);
    
    
    
return 0;
}