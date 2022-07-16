/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
  bool digit_seen[10] = {false};
  int repeatedDigits[10] = {0};
  bool repeatedFlag = false;
  int counter = 0;
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) repeatedFlag = true;
    repeatedDigits[digit]++;
    digit_seen[digit] = true;
    n /= 10;
  }


  if (!repeatedFlag) {
    printf("No repeated digit\n");
    return 0;
  } 
  printf("Repeated digit(s): \n");
  for (int i = 0; i < 10; i++) {
    if (repeatedDigits[i] > 1)
        printf("%d ", i);
  }
  printf("\n");
  
  return 0;
}
