// 41. Write a program to accept numbers from the user till their sum exceeds 50.

#include <stdio.h>

int main() {
    int num, sum = 0;

    while (sum <= 50) {
        printf("Enter number: ");
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum exceeded 50. Final sum: %d\n", sum);

    return 0;
}
