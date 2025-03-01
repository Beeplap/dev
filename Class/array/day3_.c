#include <stdio.h>
int main()
{
    int a[100];
    int flag = 0, search = 0, size;
    printf("Enter the size");
    scanf("%d", &size);

    printf("Enter the number ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search");
    scanf("%d", &search);
    for (int i = 0; i < size; i++)
    {

        if (a[i] == search)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("Yes there is number %d", search);
    else
        printf("There is no number %d", search);

    return 0;
}