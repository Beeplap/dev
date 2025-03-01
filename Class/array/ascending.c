// wap to input n size of array and display the value in ascending order

#include<stdio.h>
int main()
{
    int array[100];
    int size,asc;
    printf("Enter the size of value ");
    scanf("%d", &size);
    printf("Enter the elements of the array ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
       
    }
    
    for (int i = 0; i < size; i++)
    {
        
        for (int j = 1; i < size; i++)
        {
           scanf("%d", &array[j]);
           if (array[i]<array[j]) 
           {
            asc = array[i];
           }
           else asc = array[j];

        }
            printf("%d",asc);
       
        
        

    }
   
    
return 0;
}