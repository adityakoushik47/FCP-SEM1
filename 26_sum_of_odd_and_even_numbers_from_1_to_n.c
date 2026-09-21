/* Program 26: Sum of odd and even numbers from 1 to N */
#include <stdio.h>

int main() {
    int n, i, sumOdd = 0, sumEven = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sumEven += i;
        else
            sumOdd += i;
    }
    printf("Sum of even numbers = %d\n", sumEven);
    printf("Sum of odd numbers  = %d\n", sumOdd);
    return 0;
}
