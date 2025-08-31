// 15. Write a C program to find out the area of right angle triangle using formula area = ½ * base * height.

#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter height: ");
    scanf("%f", &height);

    area = 0.5 * base * height;
    printf("Area of right angle triangle = %.2f\n", area);

    return 0;
}
