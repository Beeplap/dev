// wap input the seconds in time and display hrs min and sec
 #include <stdio.h>
int  main (){
   int s;
   printf("Enter the seconds");
   scanf("%d",&s);
   int h=s/3600;
   int v=s % 3600;
   int m = v / 60;
   int se = v % 60;
 printf("%d hours %d minutes and %d seconds ",h,m,se);
 
     
    
}