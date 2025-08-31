// 17. Write a C program to read a floating point number from user and then display the right most digit of the integral part of the number.

#include <stdio.h>

int main() {
    float num;
    int int_part, rightmost;

    printf("Enter a floating point number: ");
    scanf("%f", &num);

    int_part = (int)num;
    rightmost = int_part % 10;

    printf("Rightmost digit of integral part: %d\n", rightmost);

    return 0;
}
