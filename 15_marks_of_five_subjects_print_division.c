/* Program 15: Marks of five subjects: print division */
#include <stdio.h>

/* First >= 60%, Second 45-59%, Third 33-44%, Fail < 33% */
int main() {
    float m1, m2, m3, m4, m5, per;
    printf("Enter marks of five subjects (out of 100 each): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    per = (m1 + m2 + m3 + m4 + m5) / 5;
    printf("Percentage = %.2f%%\n", per);

    if (per >= 60)
        printf("First Division\n");
    else if (per >= 45)
        printf("Second Division\n");
    else if (per >= 33)
        printf("Third Division\n");
    else
        printf("Fail\n");
    return 0;
}
