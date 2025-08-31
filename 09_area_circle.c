// 9. Write a program to calculate area of circle. (pi*r*r)

#include <stdio.h>

// Function to calculate area of the circle
float calculateArea(float radius) {
    const float pi = 3.14159;
    return pi * radius * radius;
}

int main() {
    float radius, area;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area = calculateArea(radius);
    printf("Area of the circle = %.2f\n", area);
    return 0;
}
