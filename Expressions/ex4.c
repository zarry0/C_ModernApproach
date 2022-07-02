// Output the octar presentation of a number
#include <stdio.h>

int main (void) {
	int num;
	
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	int oct0, oct1, oct2, oct3, oct4, octNum;
	oct4 = num % 8;
	num /= 8;
	oct3 = num % 8;
	num /= 8;
	oct2 = num % 8;
	num /= 8;
	oct1 = num % 8;
	num /= 8;
	oct0 = num % 8;
	num /= 8;

	octNum = (oct0 * 10000) + (oct1 * 1000) + (oct2 * 100) + (oct3 * 10) + oct4;
	printf("In octal, your number is: %.5d\n", octNum);

	return 0;
}
