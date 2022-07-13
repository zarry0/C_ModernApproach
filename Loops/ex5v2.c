// reverse an n digit number
#include <stdio.h>
#include <math.h>

int main (void) {
	int n;
    printf("Enter a number: ");
	scanf("%d", &n);

    int cpy = n;
    int i = 0;

    printf("Reversed number: ");
    do {
        printf("%.1d", n%10);
        n /= 10;
    } while (n > 0);

	printf("\n");
	return 0;
}
