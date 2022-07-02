#include <stdio.h>

#define TAX 1.5f

int main (void) {
	float amount;
	printf("Enter an amount: ");
	scanf("%f", &amount);

	printf("With tax added: $%.2f\n", amount*TAX);
	return 0;
}
