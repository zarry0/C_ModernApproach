//Fortmats product information
#include <stdio.h>

int main (void) {
	int id, day, month, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &id);

	printf("Enter unit price: ");
	scanf("%f", &price);
	
	printf("Enter purchase date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit    \t\tPurchase\n    \t\tPrice   \t\tDate\n");
	printf("%-4d\t\t$%7.2f\t\t%.2d/%.2d/%d\n", id, price, month, day, year);
	
	return 0;
}
