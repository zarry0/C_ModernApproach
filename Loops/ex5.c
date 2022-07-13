// reverse an n digit number
#include <stdio.h>
#include <math.h>

int main (void) {
	int n, nReversed = 0;
    printf("Enter a number: ");
	scanf("%d", &n);

    int cpy = n;
    int i = 0;

    do {
        cpy /= 10;
        i++;
    } while (cpy > 0);

    for (int j = i-1; j >= 0; j--) {
        nReversed += (n % 10) * pow(10, j);
        n /= 10;
    }
	printf("%d\n", nReversed);
	return 0;
}
