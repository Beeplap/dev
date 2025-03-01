// wap input 5 numbers and find how many numbers are even and how many are odds
  #include<stdio.h>
  int main()
  {
    int a[10];
    int even=0,odd=0;
    printf("Enter 5 numbers ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        if (a[i]%2!=0) odd++;
        
        else even++;
        
    }
    printf("There are %d even numbers and ", even);
    printf("There are %d odd numbers", odd);
  return 0;
}