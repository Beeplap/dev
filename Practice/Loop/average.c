// wap enter the n number of subject find the total and average of the marks

#include<stdio.h>
int main()
{
    int i=1,n,a;
    int total_marks=0;
    printf("Enter the number of subjects");
    scanf("%d",&n);
    do
    {
       printf("Enter the marks\n");
       scanf("%d",&a);
       total_marks = a+total_marks;
       i++;
    } while (i<=n);
    float avg = total_marks / n;
    printf("Average marks is %f\n and total marks is %d", avg, total_marks);
return 0;
}