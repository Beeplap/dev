// wap create a structure of students and create ID NAME ADDRESS and Five subjects of marks
// Find the total and average if average is greater than 80 print topper ,average is greater than 60 and less than
// 80 print first division else fail

#include <stdio.h>
struct MARKS
{
    int m1, m2, m3, m4, m5;
} S1;

struct records
{
    int id;
    char name[15];
    char address[20];
    struct MARKS S1;
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
        printf("Address: ");
        scanf("%s", &R1[i].address);
        printf("Marks: ");
        scanf("%d %d %d %d %d", &R1[i].S1.m1, &R1[i].S1.m2, &R1[i].S1.m3, &R1[i].S1.m4, &R1[i].S1.m5);
    }
    printf("\nDetails of records are:\n");
    for (int i = 0; i < 5; i++)
    {

        printf("\nRecord %d\n", i + 1);
        printf("ID : %d\n", R1[i].id);
        printf("Name : %s\n", R1[i].name);

        printf("Address: %s\n", R1[i].address);
        printf("Marks: %d/%d/%d/%d/%d \n", R1[i].S1.m1, R1[i].S1.m2, R1[i].S1.m3, R1[i].S1.m4, R1[i].S1.m5);

        int total = R1[i].S1.m1 + R1[i].S1.m2 + R1[i].S1.m3 + R1[i].S1.m4 + R1[i].S1.m5;
        float average = total / 5.0;
        if (average >= 80)
        {
            printf("Topper");
        }
        else if (average >= 60 && average < 80)
        {
            printf("First Div");
        }
        else
        {
            printf("Fail");
        }
    }
}