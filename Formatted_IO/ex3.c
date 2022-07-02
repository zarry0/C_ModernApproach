// Breaks down an ISBN number
#include <stdio.h>

int main (void) {
	int gsi, groupID, publisherCode, itemNumber, checkDigit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi, &groupID, &publisherCode, &itemNumber, &checkDigit);
	
	printf("GSI prefix: %d\n", gsi);
	printf("Group identifier: %d\n", groupID);
	printf("Publisher code: %d\n", publisherCode);
	printf("Item number: %d\n", itemNumber);
	printf("Check digit: %d\n", checkDigit);

	return 0;
}
