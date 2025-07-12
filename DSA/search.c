#include <stdio.h>
int main(){
    int item,i=0;
    int arr[5] = {1,4,6,8,5};
    printf("Enter the number to find: ");
    scanf("%d",&item);

    for (i; i<5;i++ ){
        if (arr[i]==item){
            printf("The number has been found and is in %d location",i);
            exit(0);
        }
       
    }
    printf("The number couldnot be found");
}

