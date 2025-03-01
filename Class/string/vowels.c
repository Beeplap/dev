#include<stdio.h>
int main()
{
    char a[1024];
    int v=0, c=0 , i=0;
    printf("Enter the string ");
    gets(a);
    while(a[i]!='\0'){
        if (a[i]==97 || a[i]== 101 || a[i]== 105|| a[i]==111|| a[i]==117)
        { 
            v++;
        }
        else
        c++;

        i++;
        
    }
    printf("Number of vowels: %d\n",v);
    printf("Number of consonants: %d\n",c);
return 0;
}