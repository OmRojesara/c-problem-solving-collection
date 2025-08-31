// 38. Write a program in C to display sum from 1 to given number:
// 1) Using formula n(n+1)/2
// 2) Without using formula

#include <stdio.h>

int main() {
    int n, sum_formula, sum_loop = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Using formula
    sum_formula = n * (n + 1) / 2;

    // Without using formula
    for (i = 1; i <= n; i++) {
        sum_loop += i;
    }

    printf("Sum from 1 to %d using formula: %d\n", n, sum_formula);
    printf("Sum from 1 to %d without using formula: %d\n", n, sum_loop);

    return 0;
}
