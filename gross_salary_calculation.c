// 30. Write a program in C to calculate gross salary of employee using :
// Gross Salary = Basic Pay + DA + HRA – PF.
// DA = 30% If Basic Pay < 5000 otherwise DA = 45% of Basic Pay.
// HRA = 15% of Basic Pay.
// PF = 12% of Basic Pay.

#include <stdio.h>

int main() {
    float basic, da, hra, pf, gross;

    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    if (basic < 5000)
        da = basic * 0.30;
    else
        da = basic * 0.45;

    hra = basic * 0.15;
    pf = basic * 0.12;

    gross = basic + da + hra - pf;
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
