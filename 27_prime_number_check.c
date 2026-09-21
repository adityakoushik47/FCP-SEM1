/* Program 27: Prime number check */
#include <stdio.h>

int main() {
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        flag = 1;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is a Prime number\n", n);
    else
        printf("%d is NOT a Prime number\n", n);
    return 0;
}
