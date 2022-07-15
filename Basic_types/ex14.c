// Computes the square root of a floating point number using Newton's method
#include <stdio.h>
#include <math.h>

int main (void) {
    double x, y, average = 1;
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    printf("    x    |         y         |         x/y         |         Avrg         |\n");
    printf("___________________________________________________________________________\n");
    do {
        y = average;
        average = ((x/y) + y) / (double) 2.0;
        printf("%5.0lf          %10lf            %10lf           %10lf  \n", x, y, x/y, average);


    } while(fabs(average - y) >= (y * 0.00001));

    printf("Square root: %lf\n", y);
    return 0;
}