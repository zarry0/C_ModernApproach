/* square2.c (Chapter 6, page 110) */
/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
  long i;
  long n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%ld", &n);
  for (i = 1; i <= n; i++){
    printf("%20ld%20ld\n", i,  i*i);
  }

  return 0;
}


// smallest n that fails when using int:        46340^2     =      2147395600
// smallest n that fails when using short int:  181^2       =      32761
