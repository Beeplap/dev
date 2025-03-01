#include<stdio.h>
struct employee
{
    int emp_id;
    char emp_name[15];
    float salary;
    char address[20];
};

int main()
{
    
    struct employee S1;
    printf("Employee ID: ");
    scanf("%d", &S1.emp_id);
    printf("Employee Name: ");
    scanf("%s", &S1.emp_name);
    printf("Salary: ");
    scanf("%f", &S1.salary);
    printf("Address: ");
    scanf("%s", &S1.address);

    printf("Employee ID : %d \nEmployee name : %s \nEmployee Salary : %f \nEmployee Address: %s", S1.emp_id, S1.emp_name,S1.salary,S1.address);
return 0;
}