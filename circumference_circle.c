// 10. Write a program in C to find the Circumference of a circle. (2*pi*r)

#include <stdio.h>

int main() {
    float radius, circumference;
    const float pi = 3.14159;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * pi * radius;
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
