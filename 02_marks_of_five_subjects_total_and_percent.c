/* Program 2: Marks of five subjects: total and percentage */
#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;
    printf("Enter marks of five subjects (out of 100 each): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    printf("Total      = %.2f / 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
