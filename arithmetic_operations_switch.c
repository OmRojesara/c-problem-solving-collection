// 27. Write a program in C to enter any arithmetic operator (+ - * /) and two integer values and display result according to selection of operator.

#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter an operator (+ - * /): ");
    scanf(" %c", &op);

    if (op == '+')
        printf("Result: %d\n", a + b);
    else if (op == '-')
        printf("Result: %d\n", a - b);
    else if (op == '*')
        printf("Result: %d\n", a * b);
    else if (op == '/') {
        if (b != 0)
            printf("Result: %d\n", a / b);
        else
            printf("Division by zero is not allowed.\n");
    } else
        printf("Invalid operator.\n");

    return 0;
}
