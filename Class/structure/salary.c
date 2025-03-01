// wap create a structure of students and create ID NAME ADDRESS and Five subjects of marks
// Find the total and average if average is greater than 80 print topper ,average is greater than 60 and less than
// 80 print first division else fail

#include <stdio.h>

struct records
{
    int id;
    char name[15];
    int salary[20];

    char address[20];
    
} R1;

int main()
{
    struct records R1[100];
    printf("Details of records are \n ");
    for (int i = 0; i < 5; i++)
    {
        printf("ID: ");
        scanf("%d", &R1[i].id);
        printf("Name: ");
        scanf("%s", &R1[i].name);
        printf("Salary: ");
        scanf("%d", &R1[i].salary);
        printf("Address: ");
        scanf("%s", &R1[i].address);
        
    }
    printf("\nDetails of records are:\n");
    for (int i = 0; i < 5; i++)
    {

        printf("\nRecord %d\n", i + 1);
        printf("ID : %d\n", R1[i].id);
        printf("Salary : %d\n", R1[i].salary);
        printf("Name : %s\n", R1[i].name);
        printf("Address : %s\n", R1[i].address);
        

       
    }
}