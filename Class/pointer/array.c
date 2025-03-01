#include <stdio.h>
int main()
{
   int arr[5] = {15, 25, 35, 45, 55};
   int *ptr = arr;

   for (int i = 1; i < 6; i++)
   {
      printf("Element of array[%d] = %d\n", i, *ptr++);
   }
   return 0;
}