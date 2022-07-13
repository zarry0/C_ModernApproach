// Reduces a fraction to it's lowest terms
#include <stdio.h>

int main (void) {

    int num, den;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    int gdc = den, n = num;
    while (n > 0) {
        int tmp = n;
        n = gdc % n;
        gdc = tmp;
    }

    num /= gdc;
    den /= gdc;

    printf("In lowest terms: %d/%d\n", num,den);

    return 0;
}