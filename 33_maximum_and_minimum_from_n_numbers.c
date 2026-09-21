/* Program 33: Maximum and minimum from N numbers */
#include <stdio.h>

int main() {
    int n, i, x, max, min;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Need at least 1 number\n");
        return 0;
    }

    printf("Enter %d numbers: ", n);
    scanf("%d", &x);
    max = min = x;

    for (i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x > max) max = x;
        if (x < min) min = x;
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}
