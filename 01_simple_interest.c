/* Program 1: Simple Interest */
#include <stdio.h>

int main() {
    float p, r, t, si;
    printf("Enter principal, rate (%%) and time (years): ");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}
