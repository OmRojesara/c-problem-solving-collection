#include <stdio.h>

int main() {
    float length, breadth, height, volume;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);
    printf("Enter height: ");
    scanf("%f", &height);

    volume = length * breadth * height;
    printf("Volume = %.2f\n", volume);

    return 0;
}
