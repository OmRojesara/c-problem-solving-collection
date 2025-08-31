// 32. Write a program to read marks from keyboard and display equivalent grade according to the table.

#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 34) {
        printf("Grade: Fail\n");
    } else if (marks >= 35 && marks <= 59) {
        printf("Grade: Second Class\n");
    } else if (marks >= 60 && marks <= 79) {
        printf("Grade: First Class\n");
    } else if (marks >= 80 && marks <= 100) {
        printf("Grade: Dist\n");
    } else {
        printf("Invalid Marks Entered.\n");
    }

    return 0;
}
