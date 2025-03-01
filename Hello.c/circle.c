#include<stdio.h>

  int main(){
   float  radius, pi ;
  pi=3.141592653589793238462643383279502884197;
   printf("Enter the radius");
   scanf("%f", &radius);

   printf("Area of circle is : %f", pi * radius * radius);
   return 0; 
  }