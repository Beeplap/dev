#include<stdio.h>
int main()
{
    int input,input1,reverse=0;
    printf("Enter the number ");
    scanf("%d",&input);
    input1 = input;
    while (input > 0)
    {
        int last_value = input % 10;
        reverse = last_value + reverse*10;
        input = input/10;     
    }
        if (input1 == reverse){
            printf("The number is palindrome.\n");
        }
        else{
            printf("The number is not palindrome.\n");
        } 
// printf("The reversed value is %d ", reverse);
return 0;
}