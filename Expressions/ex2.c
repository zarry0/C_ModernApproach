// reverse a 3 digit number
#include <stdio.h>

int main (void) {
	int n, nReversed;

	scanf("%d", &n);

	nReversed = ((n % 10) * 100) + (((n % 100) / 10) * 10) + (n / 100);
	printf("%d\n", nReversed);

	return 0;
}
