// Takes a date in the format mm/dd/yyyy and outputs a date in the format yyyymmdd
#include <stdio.h>

int main (void) {
	int day, month, year;

	printf("Enter the date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("You entered the date: %d%.2d%.2d\n", year, month, day);
	return 0;
}
