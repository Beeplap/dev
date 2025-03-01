#include <stdio.h>

void fibonacci(int a, int b, int count, int terms)
{
    if (count == terms)
    {
        return;
    }

    printf("%d ", a);

    fibonacci(b, a + b, terms, count + 1);
}

int main()
{
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    fibonacci(0, 1, 0, terms);
    return 0;
}
