//
#include <stdio.h>

int main (void) {
    short       shortFact      = 1;
    int         intFact        = 1;
    long        longFact       = 1;
    long long   longLongFact   = 1;
    float       floatFact      = 1;
    double      doubleFact     = 1;
    long double longDoubleFact = 1;

    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        shortFact       *= (short) i;
        intFact         *=         i;
        longFact        *=         i;
        longLongFact    *=         i;
        floatFact       *=         i;
        doubleFact      *=         i;
        longDoubleFact  *=         i;
    }
    printf("Factorial of %d (using short): %d\n", n, shortFact);
    printf("Factorial of %d (using int): %d\n", n, intFact);
    printf("Factorial of %d (using long): %ld\n", n, longFact);
    printf("Factorial of %d (using long long): %lld\n", n, longLongFact);
    printf("Factorial of %d (using float): %f\n", n, floatFact);
    printf("Factorial of %d (using double): %f\n", n, doubleFact);
    printf("Factorial of %d (using long double): %Lf\n", n, longDoubleFact);

    return 0;
}