/* Program 8: Earth revolution seconds to days, hours, minutes */
#include <stdio.h>

int main() {
    long total = 31558150;
    long days, hours, minutes, seconds, rem;

    days = total / (24 * 3600);
    rem = total % (24 * 3600);
    hours = rem / 3600;
    rem = rem % 3600;
    minutes = rem / 60;
    seconds = rem % 60;

    printf("%ld seconds = %ld days, %ld hours, %ld minutes, %ld seconds\n",
           total, days, hours, minutes, seconds);
    return 0;
}
