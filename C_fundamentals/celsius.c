// Converts A Fahrenheit temperature to Celsius
#include <stdio.h> 

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main (void) {
    float f, c;
    printf("Temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - FREEZING_PT) * SCALE_FACTOR;
    printf("Temperature in Celsius: %.2f\n", c);

    return 0; 
}