// 16. Write a C program to find out compound interest using formula Compound Interest = P * ( 1 + r / 100 ) ^n - P.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, years, ci;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter number of years: ");
    scanf("%f", &years);

    ci = principal * pow((1 + rate / 100), years) - principal;
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}
