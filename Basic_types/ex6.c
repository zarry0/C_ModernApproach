// Prints the values of various data types
#include <stdio.h>

int main (void) {

    printf("Size of int:         %3zu\n", sizeof(int));
    printf("Size of short:       %3zu\n", sizeof(short));
    printf("Size of long:        %3zu\n", sizeof(long));
    printf("Size of float:       %3zu\n", sizeof(float));
    printf("Size of double:      %3zu\n", sizeof(double));
    printf("Size of long double: %3zu\n", sizeof(long double));
    return 0;
}