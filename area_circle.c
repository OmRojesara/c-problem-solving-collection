// 9. Write a program to calculate area of circle. (pi*r*r)

#include <stdio.h>

int main() {
    float radius, area;
    const float pi = 3.14159;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    printf("Area of the circle = %.2f\n", area);

    return 0;
}
