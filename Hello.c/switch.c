#include<stdio.h>,
int main()
{
    int a;
    printf("Enter a marks: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you entered 1") ;   break ;

        case 2:
        printf("you entered 2") ;   break ;
        
        case 3: 
        printf("you entered 3") ;   break ;
        
        default:
        printf("you entered a number other than 1, 2, or 3") ;
    }
return 0;
}