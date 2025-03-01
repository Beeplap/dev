#include<stdio.h>,
int main()
{
    char grade;
    int a;
    printf("marks:");
    scanf("%d",&a);
    
    if(a>=90 && a<=100){
        grade='A';
    }
    else if (a>=80&& a<=90){
    grade='B';
    }
    else if (a>=70 && a<=80)
    { 
        grade='C';
    }
    else if (a>=60 && a<=70)
    {
        grade = 'D';
    }
    else    {
        grade = 'F';
    }
 printf("grade is %c\n",grade); 
return 0;
}