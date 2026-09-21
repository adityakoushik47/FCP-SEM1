/* Program 17: Maximum of three numbers using logical operator (&&) */
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Maximum = %d\n", a);
    else if (b >= a && b >= c)
        printf("Maximum = %d\n", b);
    else
        printf("Maximum = %d\n", c);
    return 0;
}
