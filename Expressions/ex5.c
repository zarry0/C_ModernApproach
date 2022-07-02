// Computing a UPC check digit
#include <stdio.h>

int main (void) {
	long long int upc;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%lld", &upc);

	/*
			 (( upc % 100'000'000'000) / 10'000'000'000)// 1 %10^11 / 10^10
			+ ((upc % 10'000'000'000) / 1'000'000'000)	// 2 %10^10 / 10^9
			+ ((upc % 1'000'000'000) / 100'000'000)	  	// 3 %10^9 / 10^8
			+ ((upc % 100'000'000) / 10'000'000)	 	// 4 %10^8 / 10^7
			+ ((upc % 10'000'000) / 1'000'000)	  		// 5 %10^7 / 10^6
			+ ((upc % 1'000'000) / 100'000)	 			// 6 %10^6 / 10^5
			+ ((upc % 100'000) / 10'000)	  			// 7 %10^5 / 10^4
			+ ((upc % 10'000) / 1'000)	  				// 8 %10^4 / 10^3
			+ ((upc % 1'000) / 100)	  					// 9 %10^3 / 10^2
			+ ((upc % 100) / 10)	  					// 10 %10^2 / 10^1
			+ ((upc % 10) / 1)	  						// 11 %10^1 / 10^0 
	*/

	int evenSum, oddSum, total;

	evenSum = ((upc % 10000000000) / 1000000000)
			+ ((upc % 100000000) / 10000000)
			+ ((upc % 1000000) / 100000)
			+ ((upc % 10000) / 1000)
			+ ((upc % 100) / 10);
	
	oddSum = (( upc % 100000000000) / 10000000000)
			+ ((upc % 1000000000) / 100000000)
			+ ((upc % 10000000) / 1000000)
			+ ((upc % 100000) / 10000)
			+ ((upc % 1000) / 100)
			+ ((upc % 10) / 1);

	total = 9 - ((((oddSum * 3) + evenSum) - 1) % 10); 

	printf ("Check digit: %d\n", total);

	return 0;
}


// Original program
/*
	// Computes a Universal Product Code check digit 
	#include ‹stdio.h>
	int main (void) {

		int d, i1, 12, 13, 14, 15, j1, j2, j3, j4, j5, first sum, second sum, total;
		printf ("Enter the first (single) digit: ") ;
		scanf("%ld", &d);
		printf ("Enter first group of five digits: ") ;
		scanf("%1d%1d%ld%1d%ld", &il, &i2, &i3, &i4, &15);
		printf ("Enter second group of five digits: ");
		scanf("%1d%1d%1d%1d%1d",&j1,&j2, &j1, &j2, &j3, &j4, &j5);

		first sum = d + 12 + 14 + j1 + j3 + j5;
		second sum = i1 + i3 + i3 + i5 + j2 + j4;
		total = 3 * first sum + second sum;
		printf ("Check digit: %d\n", 9 - ((total - 1)% 10) );

		return 0;

	}
*/