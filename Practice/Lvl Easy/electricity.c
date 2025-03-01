#include<stdio.h>
int main()
{
    int units,amount;
    printf("enter the units");
    scanf("%d", &units);
    if (units<=50)
    {
       amount = units*5+150;
    }
    else{
        amount = 250+(units-50)*7+150;
    }
    printf(" the amount of unit is %d",amount);
return 0;
}
