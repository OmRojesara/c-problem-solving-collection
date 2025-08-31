// 23. Write a program to find out maximum number among two numbers.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Maximum number is: %d\n", a);
    } else if (b > a) {
        printf("Maximum number is: %d\n", b);
    } else {
        printf("Both numbers are equal: %d\n", a);
    }

    return 0;
}
