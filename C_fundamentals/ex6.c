#include <stdio.h>

int main (void) {
	int x;
	printf("Enter a value for x: ");
	scanf("%d", &x);

	printf("f(%d) = 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d\n", x, ((((3*x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
	return 0;
}
