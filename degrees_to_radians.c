// 19. Write a C program to convert angle in degrees to radians using formula angle in radians = (angle in degrees * pi) / 180.

#include <stdio.h>

int main() {
    float degrees, radians;
    const float pi = 3.14159;

    printf("Enter angle in degrees: ");
    scanf("%f", &degrees);

    radians = degrees * pi / 180;
    printf("Radians: %.4f\n", radians);

    return 0;
}
