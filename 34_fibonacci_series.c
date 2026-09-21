/* Program 34: Fibonacci series */
#include <stdio.h>

int main() {
    int n, i;
    long a = 0, b = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%ld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
