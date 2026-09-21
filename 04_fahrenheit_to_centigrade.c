/* Program 4: Fahrenheit to Centigrade */
#include <stdio.h>

int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("Temperature in Centigrade = %.2f\n", c);
    return 0;
}
