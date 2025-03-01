#include <stdio.h>
int main()
{
    FILE *file;
    int v = 0, c = 0;
    char a;
    file = fopen("abc.txt", "r");
    while ((a = fgetc(file)) != EOF)
    {
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        {
            if ((a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') || (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'))
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }
    printf("Number of vowels: %d\n", v);
    printf("Number of consonants: %d\n", c);

    fclose(file);
    return 0;
}