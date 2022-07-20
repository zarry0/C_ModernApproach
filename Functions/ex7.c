// Computes the power of a number by squaring
#include <stdio.h>

int power(int x, int n);

int main (void) {
    int x, n;
    printf("Enter a base and exponent (ints): ");
    scanf("%d %d", &x, &n);
    printf("%d^%d = %d\n", x, n, power(x, n));

    return 0;
}

int power(int x, int n){
    if (n <= 0) return 1;
    return x * power(x, n-1);
}