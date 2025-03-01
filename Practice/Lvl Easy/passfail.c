#include<stdio.h>
int main()
{
    int marks1, marks2, marks3,marks4, marks5;
    printf("enter the marks\n");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);
    printf("your marks are: %d %d %d %d %d and \n" , marks1,marks2,marks3,marks4,marks5);
    float avg = (marks1+marks2+marks3+marks4+marks5)/5;
    if (avg>=80)
    {
        printf("Topper");
    }
    else if (avg>=60)
    {
        printf("First Division");
    }
    else if (avg>=50)
    {
        printf("Second Division");
    }
    else{
        printf("You have failed");
    }
    
    


return 0;
}