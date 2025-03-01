#include <stdio.h>
int main()
{
    FILE *file;

    char a[200];
    file = fopen("abc.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    while (fscanf(file, "%s", a) != EOF)
    {
        printf("%s ", a);
    }
    fclose(file);
    return 0;
}
