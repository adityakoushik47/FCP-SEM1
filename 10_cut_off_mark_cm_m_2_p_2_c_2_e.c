/* Program 10: Cut-off mark: CM = M/2 + P/2 + C/2 + E */
#include <stdio.h>

int main() {
    float m, p, c, e, cm;
    printf("Enter marks in Maths, Physics, Chemistry (out of 200 each): ");
    scanf("%f %f %f", &m, &p, &c);
    printf("Enter marks in entrance exam (out of 100): ");
    scanf("%f", &e);
    cm = m / 2 + p / 2 + c / 2 + e;
    printf("Cut off mark = %.2f\n", cm);
    return 0;
}
