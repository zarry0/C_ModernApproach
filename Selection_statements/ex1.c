// Calculates how many digits a number (up to 4 digits) contains
#include <stdio.h>

int main (void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int digits = 1;
    if (n > 999)       digits = 4;
    else if (n > 99)   digits = 3;
    else if (n > 9)    digits = 2;
    else               digits = 1;

    printf("The number %d has %d digits\n", n, digits);
    return 0;
}