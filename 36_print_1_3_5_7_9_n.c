/* Program 36: Print 1, 3, 5, 7, 9 ... N */
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 2)
        printf("%d ", i);
    printf("\n");
    return 0;
}
