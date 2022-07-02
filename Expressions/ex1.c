// reverse a two digit number
#include <stdio.h>

int main (void) {
	int n, nReversed;
	scanf("%d", &n);
	nReversed = ((n % 10) * 10) + (n / 10);
	printf("%d\n", nReversed);
	return 0;
}
