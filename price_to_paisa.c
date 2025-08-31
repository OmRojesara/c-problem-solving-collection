// 21. Write a C program to read a price of an item in (float) like 10.25 and print output in (int) paisa like 1025.

#include <stdio.h>

int main() {
    float price;
    int paisa;

    printf("Enter price of item (in Rupees): ");
    scanf("%f", &price);

    paisa = (int)(price * 100);
    printf("Price in paisa: %d\n", paisa);

    return 0;
}
