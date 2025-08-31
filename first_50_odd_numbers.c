// 42. Print first 50 odd numbers, displaying 5 numbers per line.

#include <stdio.h>

int main() {
    int count = 0, num = 1;

    while (count < 50) {
        printf("%4d", num);
        count++;
        if (count % 5 == 0)
            printf("\n");
        num += 2; // Next odd number
    }

    return 0;
}
