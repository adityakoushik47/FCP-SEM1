/* Program 37: Print 2, 4, 6, 8, 10, 12 ... N */
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
        printf("%d ", i);
    printf("\n");
    return 0;
}
