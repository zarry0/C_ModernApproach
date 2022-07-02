#include <stdio.h>

#define MONTHLY_FACTOR 1.0f / (100.0f * 12.0f)

int main (void) {
	float amount, interest, payment;
	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter mothly payment: ");
	scanf("%f", &payment);

	//(20000-386.66) + (20000*.06/12)
	float firstMonth, secondMonth, thirdMonth;
	firstMonth = (amount - payment) + (amount * interest * MONTHLY_FACTOR);
	secondMonth = (firstMonth - payment) + (firstMonth * interest * MONTHLY_FACTOR);
	thirdMonth = (secondMonth - payment) + (secondMonth * interest * MONTHLY_FACTOR);

	printf("Balance reamining after first payment: $%.2f\n", firstMonth);
	printf("Balance reamining after second payment: $%.2f\n", secondMonth);
	printf("Balance reamining after third payment: $%.2f\n", thirdMonth);

	return 0;
}
