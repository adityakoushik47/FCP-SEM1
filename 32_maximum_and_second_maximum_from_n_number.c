/* Program 32: Find largest and second largest */
#include <stdio.h>
int main() {
    int n, i, x, max, second = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    scanf("%d", &max);
    second = max;
    for (i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x > max) {
            second = max;
            max = x;
        } else if (x > second) {
            second = x;
        }
    }
    printf("Maximum = %d\n", max);
    printf("Second maximum = %d\n", second);
    return 0;
}

