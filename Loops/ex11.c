// Aproximates e
#include <stdio.h>

int main (void) {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    long double e = 1.0;
    
    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) factorial *= j;

        e += 1.0 / factorial; 
    }

    printf("Value of e: %.5Lf\n", e);

    return 0;
}
