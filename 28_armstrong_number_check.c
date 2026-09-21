/* Program 28: Armstrong number check */
#include <stdio.h>

int main() {
    int n, temp, digit, count = 0, i;
    long sum = 0, p;

    printf("Enter a number: ");
    scanf("%d", &n);

    /* count digits */
    temp = n;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    /* sum of each digit raised to the power of 'count' */
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        p = 1;
        for (i = 0; i < count; i++)
            p *= digit;
        sum += p;
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is NOT an Armstrong number\n", n);
    return 0;
}
