#include<stdio.h>
int main()
{
    int array[100];
    
    printf("Enter the elements of the array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);

    }
    int large = array[0]; 
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > large)
        {
            large = array[i];
        }
        
    }
    int small = array[0]; 
    for (int i = 0; i < 5; i++)
    {
        if (array[i] < small)
        {
            small = array[i];
        }
        
    }

    printf("Largest element of array is %d", large);
    printf("smallest element of array is %d", small);
    
return 0;
}