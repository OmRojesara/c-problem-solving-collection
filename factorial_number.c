// 37. Write a program in C to find out factorial of a given number.

#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) 
        printf("Factorial of negative number is not defined.\n");
    else {
        for (i = 1; i <= num; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    }
    return 0;
}
