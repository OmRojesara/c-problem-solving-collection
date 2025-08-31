// 40. Write a program to check whether the given number is prime or not.

#include <stdio.h>

int main() {
    int num, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
        flag = 0; // 0 and 1 are not prime

    for (i = 2; i <= num / 2 && flag; ++i) {
        if (num % i == 0) {
            flag = 0; // Not prime
        }
    }

    if (flag)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
