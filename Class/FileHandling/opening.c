#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("abc.txt", "w");
    char name[50];
    int roll, choice;
    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Enter your roll number: ");
        scanf("%d", &roll);

        fprintf(file, "My name is %s and My roll no is %d", name, roll);
        if (choice == 2)
            break;
    }

    fclose(file);
    printf("File is created");
    return 0;
}