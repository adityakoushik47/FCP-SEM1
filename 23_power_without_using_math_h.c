/* Program 23: Power without using math.h */
#include <stdio.h>

int main() {
    int base, exp, i;
    long long result = 1;
    printf("Enter base and exponent (non-negative): ");
    scanf("%d %d", &base, &exp);

    for (i = 1; i <= exp; i++)
        result = result * base;
    printf("%d ^ %d = %lld\n", base, exp, result);
    return 0;
}
