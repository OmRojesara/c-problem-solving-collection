// 7. Write a program in C to convert the given temperature from Fahrenheit to Celsius using the formula C = (F – 32) / 1.8 

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
