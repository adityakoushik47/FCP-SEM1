/* Program 11: Total seconds to time (hh:mm:ss) */
#include <stdio.h>

int main() {
    long total, hr, min, sec;
    printf("Enter total seconds: ");
    scanf("%ld", &total);
    hr  = total / 3600;
    min = (total % 3600) / 60;
    sec = total % 60;
    printf("Time = %ld hr : %ld min : %ld sec\n", hr, min, sec);
    return 0;
}
