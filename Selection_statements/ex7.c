// Find the largest and smallest of 4 numbers
#include <stdio.h>

int main (void) {
    int n1, n2, n3, n4;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    int max1, min1, max2, min2;
    max1 = (n1 > n2) ? n1 : n2;
    min1 = (n1 > n2) ? n2 : n1;
    
    max2 = (n3 > n4) ? n3 : n4;
    min2 = (n3 > n4) ? n4 : n3;

    printf("Largest: %d\n", (max1 > max2) ? max1 : max2);
    printf("Smallest: %d\n", (min1 > min2) ? min2 : min1);

    return 0;
}