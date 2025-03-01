#include <stdio.h>

int is_prime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int num,prime;
    printf("Enter the number: ");
    scanf("%d", &prime);
    printf("Prime numbers from 1 to 100:\n");
    for (num = 1; num <= prime; num++) {
        if (is_prime(num)) {
            printf("%d ", num);
            
        }

        
        
        
    }
    
   
    return 0;
}
