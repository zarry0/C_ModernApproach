// Computes teh value of f(x) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
#include <stdio.h>
#include <math.h>

double f(double x);

int main (void) {
    double x;
    printf("Enter a real number: ");
    scanf("%lf", &x);
    printf("%lf\n", f(x));
    
    return 0;
}

double f(double x){
    return 3 * pow(x,5) + 2 * pow(x,4)  - 5 * pow(x,3) - 1 * pow(x,2) + 7 * x - 6;
}