#include<stdio.h>
int main()
{
    int array[100];
    int size;
    printf("Enter the size of value");
    scanf("%d", &size);
    printf("Enter the elements of the array");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);

    }
    int large = array[0]; 
    for (int i = i; i < size; i++)
    {
        if (array[i] > large)
        {
            large = array[i];
        }
        
    }
    printf("Largest element of array is %d", large);
    
return 0;
}