#include <stdio.h>

#define MONTHLY_FACTOR 1.0f / (100.0f * 12.0f)

int main (void) {
	float amount, interest, payment;
	int n;

	printf("Enter the number of payments ");
	scanf("%d", &n);
	
	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter mothly payment: ");
	scanf("%f", &payment);

	float monthly = amount;
	for (int i = 1; i <= n; i++) {
		monthly = (monthly - payment) + (monthly * interest * MONTHLY_FACTOR);
		printf("Balance reamining after %d payment: $%.2f\n", i,monthly);
	} 

	return 0;
}
