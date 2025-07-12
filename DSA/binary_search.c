#include <stdio.h>
int main(){
    int item ,lr=0,up=4,mid, i = 0,f=0;
    int arr[5] = {1, 4, 6, 8,9};
    printf("Enter the number to find: ");
    scanf("%d", &item);
    while(lr<=up){
        mid = (lr + up) / 2;
        if(arr[mid] == item){
            f=1;break;

        }
        else if(arr[mid] < item){
            lr = mid + 1;
        }
        else{
            up = mid - 1;
        }
        i++;
    }

    if (f){
        printf("The number has been found and is in %d location\n", mid);
    } else {
        printf("The number could not be found\n");
    }
    return 0;
}