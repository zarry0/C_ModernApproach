// Aproximates e
#include <stdio.h>
#include <stdbool.h>

int main (void) {
    float epsilon;

    printf("Enter a value for epsilon: ");
    scanf("%f", &epsilon);

    long double e = 1.0;
    long double series = 1.0;
    int n = 1;
    while (true){
        int factorial = 1;
        for (int j = 1; j <= n; j++) factorial *= j;
        series = 1.0 / factorial;
        printf("series: %.5Lf\n", series);
        if (epsilon > series) break;
        e += series; 
        n++;
    }

    printf("Value of e: %.5Lf\n", e);

    return 0;
}
