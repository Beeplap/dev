// wap to find the sum fo even numbers
 #include<stdio.h>
 int main()
 {
     int modulus,j,sum=0,odd_sum=0;
     printf("Enter the value to seprate and add");
     scanf("%d",&j);
     while (j>0)
     {
        modulus = j % 10;

       if (modulus % 2==0)
       {
        sum = modulus + sum;
       }
       else{
        odd_sum += modulus;

       }
       j = j /10;

    }
    printf("The sum of even numbers only is %d and odd is %d",sum,odd_sum);

return 0;
}

