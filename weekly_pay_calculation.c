// 14. Write a C program to obtain an hourly pay rate and the number of hours worked by workers. Calculate their pay for the week.

#include <stdio.h>

int main() {
    float hourly_rate, hours, total_pay;

    printf("Enter hourly pay rate: ");
    scanf("%f", &hourly_rate);

    printf("Enter number of hours worked: ");
    scanf("%f", &hours);

    total_pay = hourly_rate * hours;
    printf("Total pay for the week = %.2f\n", total_pay);

    return 0;
}
