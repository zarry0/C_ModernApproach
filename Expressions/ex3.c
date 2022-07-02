// reverse a 3 digit number without arithmetic
#include <stdio.h>

int main (void) {
	int m, d, u, nReversed;

	printf("Enter a 3 digit number, separated by spaces: ");
	scanf("%d %d %d", &m, &d, &u);

	nReversed = (u * 100) + (d * 10) + m;
	printf("Reversed number: %d\n", nReversed);

	return 0;
}
