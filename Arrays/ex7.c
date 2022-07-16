// Reads a 5x5 array of numbers and prints the row sums and the column sums
#include <stdio.h>

int main (void) {

    int n, colSum[5] = {0}, rowSum[5] = {0};
    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++){
            scanf("%d", &n);
            rowSum[i] += n;
            colSum[j] += n;
        }
    }

    printf("Row totals: ");
    for (int i = 0; i < 5; i++) printf("%d ", rowSum[i]);
    printf("\nColumn totals: ");
    for (int i = 0; i < 5; i++) printf("%d ", colSum[i]);
    printf("\n");

    return 0;
}