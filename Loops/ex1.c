// Takes a series of none negative numbers and outputs the largest one
#include <stdio.h>

int main (void) {

    float n, max;
    printf("Enter a number: ");
    scanf("%f", &n);
    max = n;
    while (n > 0) {
        printf("Enter a number: ");
        scanf("%f", &n);
        if (n > max) max = n;
    }

    printf("The largest number entered was %.2f\n", max);
    return 0;
}