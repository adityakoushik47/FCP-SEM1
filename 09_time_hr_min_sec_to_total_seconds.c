/* Program 9: Time (hr, min, sec) to total seconds */
#include <stdio.h>

int main() {
    int hr, min, sec, total;
    printf("Enter time in hours, minutes and seconds: ");
    scanf("%d %d %d", &hr, &min, &sec);
    total = hr * 3600 + min * 60 + sec;
    printf("Total seconds = %d\n", total);
    return 0;
}
