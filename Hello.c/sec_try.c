// try
#include <stdio.h>
int main(){
   float s,v;
   printf("Enter the seconds");
   scanf("%f",&s);
   v=s/3600;
   int h=v;
   float i =(v-h)*60;
   int m=(v-h)*60;
  
 printf("%d hours and %d minutes ",h,m);
     
    
}