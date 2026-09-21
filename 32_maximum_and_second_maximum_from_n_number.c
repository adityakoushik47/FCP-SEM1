/* Program 32: Maximum and second maximum from N numbers */
#include <stdio.h>

/* Second maximum = second largest DISTINCT value */
int main() {
    int n, i, x, max, second = 0, hasSecond = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Need at least 1 number\n");
        return 0;
    }

    printf("Enter %d numbers: ", n);
    scanf("%d", &max);

    for (i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x > max) {
            second = max;
            hasSecond = 1;
            max = x;
        } else if (x < max && (!hasSecond || x > second)) {
            second = x;
            hasSecond = 1;
        }
    }
    printf("Maximum = %d\n", max);
    if (hasSecond)
        printf("Second Maximum = %d\n", second);
    else
        printf("No second maximum (all numbers are equal)\n");
    return 0;
}
