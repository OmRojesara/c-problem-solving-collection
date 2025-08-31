#include <stdio.h>

int main() {
    int a = 8, b = 4;
    float x = 8.5, y = 4.5;

    printf("Integers:\n");
    printf("Add: %d\n", a + b);
    printf("Multiply: %d\n", a * b);
    printf("Divide: %d\n", a / b);

    printf("\nFloats:\n");
    printf("Add: %.2f\n", x + y);
    printf("Multiply: %.2f\n", x * y);
    printf("Divide: %.2f\n", x / y);

    return 0;
}
