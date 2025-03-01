// wap input the 10 numbers and find the sum of these numbers

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the langth of elements: ");
    scanf("%d", &n);
    int abc[n];
    int a = 0;
    int *b = &a;
    printf("The address of variable a is %p \n",b);
    printf("Enter the value");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &abc[i]);
        a = abc[i] + a;
    }

    printf("%d ", a);
    return 0;
}