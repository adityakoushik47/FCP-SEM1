/* Program 3: Gross Salary */
#include <stdio.h>

int main() {
    float basic, da, hra, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    da  = 0.40 * basic;
    hra = 0.20 * basic;
    gross = basic + da + hra;
    printf("Basic = %.2f\nDA = %.2f\nHRA = %.2f\n", basic, da, hra);
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
