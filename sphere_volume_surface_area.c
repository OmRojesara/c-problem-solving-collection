// 13. Write a program that reads the radius of sphere “r”, then it calculates its volume “V” and surface area “A” using formulas.

#include <stdio.h>

int main() {
    float r, volume, surface_area;
    const float pi = 3.14159;

    printf("Enter radius of sphere: ");
    scanf("%f", &r);

    surface_area = 4 * pi * r * r;
    volume = (4.0 / 3.0) * pi * r * r * r;

    printf("Surface area = %.2f\n", surface_area);
    printf("Volume = %.2f\n", volume);

    return 0;
}
