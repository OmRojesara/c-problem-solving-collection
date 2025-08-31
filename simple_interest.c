// 11. Write a program in C to calculate simple interest using formula SI = (P*R*N) / 100.

#include <stdio.h>

int main() 
{
    float principal, rate, time, si;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest: ");
    scanf("%f", &rate);
    printf("Enter Time (years): ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", si);

    return 0;
}
