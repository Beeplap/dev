#include<stdio.h>
int main()
{
    char ch;
     printf("Enter a character: ");
     scanf("%c", &ch);
     if (ch>=97 && ch<=122)
     {
        printf("The character is lowercase %d", ch);
     }
     else {
        printf("The character is uppercase %d",ch);
     }
     
return 0;
}