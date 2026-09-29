#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers (negative number to stop):\n");
    scanf("%d", &num);

    while (num >= 0) {
        sum += num;
        scanf("%d", &num);
    }

    printf("Sum = %d\n", sum);

    return 0;
}