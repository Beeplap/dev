#include <stdio.h>

int main() {
    int rows, cols, evenCount = 0, oddCount = 0;

    // Input rows and columns
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int array[rows][cols];

    // Input array elements and count odd/even
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
            if (array[i][j] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }

    // Output results
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

    return 0;
}
