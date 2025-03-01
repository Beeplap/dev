// wap input the n numbers. count the total number ofeven or odd number
  #include<stdio.h>
  int main()
  {
    int count,i=1,j,even=0,odd=0;
    printf("Enter the amount of numbers to count");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        printf("Enter the number to count");
        scanf("%d", &j);
        
        if (j%2==0)
        {
           even++;
        }
        else{
          odd++;
        }  
    }
    printf("There are %d amount of even numbers and %d amount of odd numbers\n", even,odd);
    
  return 0;
  }