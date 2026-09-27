/* Program 24: Value of Y(x, n) */
#include <stdio.h>

int main() {
    float x, y;
    int n, i;
    float p = 1;

    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);

    if (n == 1)
        y = 1 + x;
    else if (n == 2)
        y = 1 + x / n;
    else if (n == 3) {
        for (i = 1; i <= n; i++)
            p = p * x;
        y = 1 + p;
    } else
        y = 1 + n * x;

    printf("Y(%.2f, %d) = %.2f\n", x, n, y);
    return 0;
}
