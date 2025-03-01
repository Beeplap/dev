#include<stdio.h>
#define meter_charge 150
int main()
{
    int u,amount;
    printf("Enter the units ");
    scanf("%d", &u);
    if (u<=100) 
        amount = u*5+meter_charge;
    else if ( u<=300) 
        amount = (100)*5+ (u-100)*7 + meter_charge;
    else 
    amount = (100)*5 + (200)*7 + (u-300)*9 + meter_charge;
    printf(" The total electricity amount is %d",amount);
    }