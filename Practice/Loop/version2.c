 #include<stdio.h>
  int main()
  {
    int i=0,a,b,even=0,odd=0;
    printf("Enter the amount of numbers to count");
    scanf("%d", &a);
    while (i<a)
    {
        printf("enter the number to count");
        scanf("%d", &b);
        if (b%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        i++;
    }
    
    
    // for (int i = 1; i <= count; i++)
    // {
    //     printf("Enter the number to count");
    //     scanf("%d", &j);
        
    //     if (j%2==0)
    //     {
    //        even++;
    //     }
    //     else{
    //       odd++;
    //     }  
         
    // }
    printf("There are %d amount of even numbers and %d amount of odd numbers\n", even,odd);
    
  return 0;
  }