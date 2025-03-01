#include <stdio.h>
struct structDOB
{
    int dd, mm, yy;
} D1;

struct records
{
    int id;
    char name[15];
    float salary;
    char address[20];
    struct structDOB D1;
};

int main()
{
    struct records R1[100];
    printf("Details of records are ");
    for (int i = 0; i < 5; i++)
    {
        printf("ID: ");
        scanf("%d", &R1[i].id);
        printf("Name: ");
        scanf("%s", &R1[i].name);
        printf("Salary: ");
        scanf("%f", &R1[i].salary);
        printf("Address: ");
        scanf("%s", &R1[i].address);
        printf("Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d",&R1[i].D1.dd,&R1[i].D1.mm,&R1[i].D1.yy);
    }
    

   

   printf("\nDetails of records are:\n");
    for (int i = 0; i < 5; i++)
    {
        if (R1[i].salary > 10000)
        {
           
        
        
        printf("\nRecord %d\n", i + 1);
        printf("ID : %d\n", R1[i].id);
        printf("Name : %s\n", R1[i].name);

        printf("Salary : %f\n", R1[i].salary);
        printf("Address: %s\n", R1[i].address);
        printf("Date of Birth: %d/%d/%d\n", R1[i].D1.dd, R1[i].D1.mm, R1[i].D1.yy);
    }
    }
    return 0;
}