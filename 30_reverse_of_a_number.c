/* Program 30: Reverse of a number */
#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("Reverse = %d\n", rev);
    return 0;
}
