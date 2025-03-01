#include<stdio.h>
void morning();
void night();
void evening();

void morning(){
    printf("Good morning!\n");
};
void night(){
    printf("Good night!\n");
};
void evening(){
    printf("Good evening!\n");
};

int main()
{
    morning();
    night();
    evening();
    
return 0;
}