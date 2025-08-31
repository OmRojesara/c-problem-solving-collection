// 43. Read 4-digit number and print sum of first and last digit.

#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    last_digit = num % 10;
    first_digit = num / 1000;

    sum = first_digit + last_digit;

    printf("Sum of first and last digit = %d\n", sum);

    return 0;
}
