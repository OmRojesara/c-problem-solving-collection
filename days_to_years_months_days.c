// 20. Write a program to accept number of days and print year, month and remaining days.

#include <stdio.h>

int main() {
    int days, years, months, rem_days;

    printf("Enter total number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;
    months = days / 30;
    rem_days = days % 30;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", rem_days);

    return 0;
}
