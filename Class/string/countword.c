#include<stdio.h>
int main()
{
    char a[20];
    int i = 0, word=1;
    printf("Enter a string: ");
    gets (a);
    while (a[i] != '\0')
    {
        if (a[i] == ' '){
        word++;
        }
        i++;
    }
    printf("Number of words in the string: %d", word);
    printf("Total length of string is %d", i-word+1);
    
return 0;
}