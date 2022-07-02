#include <stdio.h>

int main (void) {
	int x;
	printf("Enter a value for x: ");
	scanf("%d", &x);
	int x2 = x * x, x3 = x2 * x, x4 = x3 * x, x5 = x4 * x;
	printf("f(%d) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d\n", x, 3*x5 + 2*x4 - 5*x3 - x2 + 7*x - 6);
	return 0;
}
