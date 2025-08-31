// 12. Write a program in C to display sum from 1 to N using the formula N(N+1)/2.

#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;
    printf("Sum from 1 to %d is: %d\n", n, sum);

    return 0;
}
