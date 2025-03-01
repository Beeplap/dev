#include<stdio.h>
int main()
{
    int income;
    float tax= 0;
    
    printf("Enter your annual income: ");
     scanf("%d", &income);
         
         if(income < 250000){
            tax = 0;
         }
         else if (income>=250000 &&  income<=500000)
         {
            tax = (income - 250000) * 0.05;
         }
         else if (income>500000 &&  income<=1000000)
         {
            tax = (500000-250000) * 0.05 + (income-500000) * 0.20;                     
         }
         else{
            tax = (500000-250000)*0.05 + (1000000-500000) * 0.2 + (income-1000000) * 0.30 ;
         }
         
         printf("Total income tax is: %f\n", tax);
return 0;
}