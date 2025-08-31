// 35. Write a program in C for grade calculation using if...else if ladder and switch statement.

#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    printf("Enter marks for subject 1: ");
    scanf("%d", &m1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &m2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &m3);

    total = m1 + m2 + m3;

    // Using if...else if ladder
    char grade;
    if (total >= 80) {
        grade = '1'; // A+
    } else if (total >= 70) {
        grade = '2'; // A
    } else if (total >= 60) {
        grade = '3'; // A-
    } else if (total >= 50) {
        grade = '4'; // B+
    } else {
        grade = '0'; // Fail
    }

    // Using switch for displaying grade
    switch(grade) {
        case '1': printf("Grade: A+\n"); break;
        case '2': printf("Grade: A\n"); break;
        case '3': printf("Grade: A-\n"); break;
        case '4': printf("Grade: B+\n"); break;
        default: printf("Grade: Fail\n");
    }

    return 0;
}
