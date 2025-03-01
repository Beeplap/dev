#include <stdio.h>
int main()
{
    int div, divider ;
    int i=0;
    printf("Enter dividend: ");
    scanf("%d", &div);
    printf(" Divide by : ");
    scanf("%d", &divider);
   while (div >= divider)
   {
    div -= divider;
    i++;
   }
    printf("The quotient is %d and the remainder is %d" ,i, div);
     return 0;
}