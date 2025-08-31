// 18. Write a C program to read the distance between two cities in KM and print that distance in meters, feet, inches and centimeters.

#include <stdio.h>

int main() {
    float km;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    printf("Meters: %.2f\n", km * 1000);
    printf("Feet: %.2f\n", km * 3280.84);
    printf("Inches: %.2f\n", km * 39370);
    printf("Centimeters: %.2f\n", km * 100000);

    return 0;
}
