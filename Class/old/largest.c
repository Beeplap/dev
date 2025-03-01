#include <stdio.h>
#include <stdlib.h> // For malloc, free

int main() {
    int n, i;
    int *arr;
    int largest, smallest;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array dynamically
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest
    largest = smallest = arr[0];

    // Find the largest and smallest elements
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Output the results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    // Free the allocated memory
    free(arr);

    return 0;
}
