// 33. Program to compute net salary after allowing perks and deducting income tax.

#include <stdio.h>

int main() {
    int job_no, level;
    float basic, hra, ca, ea, gross, tax, net;

    // Get executive details
    printf("Enter Job Number: ");
    scanf("%d", &job_no);

    printf("Enter Level (1-4): ");
    scanf("%d", &level);

    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    // Allowances according to level
    if (level == 1) {
        ca = 1000; ea = 500;
    } else if (level == 2) {
        ca = 750; ea = 200;
    } else if (level == 3) {
        ca = 500; ea = 100;
    } else if (level == 4) {
        ca = 250; ea = 0;
    } else {
        printf("Invalid level entered.\n");
        return 1;
    }

    // HRA is always 10% of basic
    hra = basic * 0.10;

    // Gross salary
    gross = basic + hra + ca + ea;

    // Income tax deduction
    if (gross <= 2000) {
        tax = 0;
    } else if (gross <= 4000) {
        tax = gross * 0.03;
    } else if (gross <= 5000) {
        tax = gross * 0.05;
    } else {
        tax = gross * 0.08;
    }

    // Net salary
    net = gross - tax;

    // Display result
    printf("\nExecutive Job No: %d\n", job_no);
    printf("Level: %d\n", level);
    printf("Basic Pay: %.2f\n", basic);
    printf("HRA: %.2f\n", hra);
    printf("Conveyance Allowance: %.2f\n", ca);
    printf("Entertainment Allowance: %.2f\n", ea);
    printf("Gross Salary: %.2f\n", gross);
    printf("Income Tax: %.2f\n", tax);
    printf("Net Salary: %.2f\n", net);

    return 0;
}
