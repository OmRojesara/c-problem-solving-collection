// 31. Write a program to check eligibility of student for admission.

#include <stdio.h>

int main() {
    int math, phy, chem;
    printf("Enter marks in Mathematics: ");
    scanf("%d", &math);
    printf("Enter marks in Physics: ");
    scanf("%d", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chem);

    int total = math + phy + chem;

    if ((math >= 50 && phy >= 45 && chem >= 60 && total >= 170) ||
        (math + phy >= 120)) {
        printf("Student is eligible for admission\n");
    } else {
        printf("Student is not eligible for admission\n");
    }

    return 0;
}
