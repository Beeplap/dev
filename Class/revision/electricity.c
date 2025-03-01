#include <stdio.h>

int main() {
    int units;
    float total, tax, final_amt;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 20) {
        total = 80;
    } else if (units <= 100) {
        total = 80 + (units - 20) * 8;
    } else if (units <= 200) {
        total = 80 + (80 * 8) + (units - 100) * 10;
    } else {
        total = 80 + (80 * 8) + (100 * 10) + (units - 200) * 12;
    }

    
    tax = total * 0.15;
    final_amt = total + tax;

    printf("Total charge (with 15%% tax): Rs %.2f\n", final_amt);

    return 0;
}
