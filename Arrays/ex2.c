/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  int repeatedDigits[10] = {0};
  int counter = 0;
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    repeatedDigits[digit]++;
    n /= 10;
  }


  printf("Digit:      ");
  for (int i = 0; i < 10; i++) {
    printf("%i ", i);
  }
  printf("\nOcurrences: ");
  for (int i = 0; i < 10; i++) {
    printf("%i ", repeatedDigits[i]);
  }
  printf("\n");
  
  return 0;
}
