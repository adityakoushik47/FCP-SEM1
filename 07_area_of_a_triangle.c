/* Program 7: Area of a Triangle */
#include <stdio.h>

int main() {
    float base, height, area;
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("Area of triangle = %.2f\n", area);
    return 0;
}
