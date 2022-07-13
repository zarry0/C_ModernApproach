// Computes the greatest common diviser (GCD) of two numbers
#include <stdio.h>

int main (void) {   
    
    int n, m;
    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    while (n > 0) {
        int tmpN = n;
        n = m % n;
        m = tmpN;
    }
    printf("Greatest common divisor: %d\n", m);
    
    return 0;
}