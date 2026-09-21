/* Program 19: Small case letter check using conditional operator */
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    (ch >= 'a' && ch <= 'z') ? printf("'%c' is a small case letter\n", ch)
                             : printf("'%c' is NOT a small case letter\n", ch);
    return 0;
}
