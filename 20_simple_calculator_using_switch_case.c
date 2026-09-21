/* Program 20: Simple calculator using switch-case */
#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1: printf("%.2f + %.2f = %.2f\n", a, b, a + b); break;
        case 2: printf("%.2f - %.2f = %.2f\n", a, b, a - b); break;
        case 3: printf("%.2f * %.2f = %.2f\n", a, b, a * b); break;
        case 4:
            if (b != 0)
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            else
                printf("Division by zero is not possible\n");
            break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
