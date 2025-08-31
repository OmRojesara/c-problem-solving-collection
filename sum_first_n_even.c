// 36. Write a program in C to display a sum of first N even numbers.

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter N: ");
    scanf("%d", &n);

    sum = n * (n + 1); // Sum of first N even numbers = n(n+1)

    printf("Sum of first %d even numbers is: %d\n", n, sum);

    return 0;
}
