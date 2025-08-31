// 34. Write a program to take no of units consumed from user and calculate the bill amount.

#include <stdio.h>

int main() {
    int units;
    float bill = 0;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 2.30;
    } else if (units <= 100) {
        bill = 50 * 2.30 + (units - 50) * 2.60;
    } else if (units <= 250) {
        bill = 50 * 2.30 + 50 * 2.60 + (units - 100) * 3.25;
    } else {
        bill = 50 * 2.30 + 50 * 2.60 + 150 * 3.25 + (units - 250) * 4.35;
    }

    printf("Total bill amount: Rs %.2f\n", bill);

    return 0;
}
