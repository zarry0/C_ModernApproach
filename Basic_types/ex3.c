/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(void)
{
  double n, sum = 0;

  printf("This program sums a series of double values.\n");
  printf("Enter floating point numbers (0 to terminate): ");

  scanf("%lf", &n);
  while (n != 0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is: %lf\n", sum);

  return 0;
}
