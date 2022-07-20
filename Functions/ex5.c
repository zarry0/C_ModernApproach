// Prints an nxn magic square (a square arrangement of the numbers 1,2, ...,n^2 in which the sums of the rows, columns and diagonals are all the same)
#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main (void) {
    int n;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 an 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Number must be odd and between 1 and 99\n");
        return 1;
    }

    int magicSquare[n][n];
    
    create_magic_square(n, magicSquare);
    print_magic_square(n, magicSquare);

    return 0;
}

void create_magic_square(int n, int magic_square[n][n]){
    for (int i = 0; i < n; i++)
            for (int j = 0; j < n ; j++)
                magic_square[i][j] = 0;

        int mid = n / 2;
        int index[2] = {0, mid}, prev[2];
        prev[0] = index[0];
        prev[1] = index[1];
        magic_square[index[0]][index[1]] = 1;

        int i = 2;

        while (i <= n*n) {

            index[0] = ((index[0]-1 % n) + n) % n;
            index[1] = ((index[1]+1 % n) + n) % n;

            if (magic_square[index[0]][index[1]] != 0){
                index[0] = prev[0] + 1;
                index[1] = prev[1];
            }

            magic_square[index[0]][index[1]] = i;
            prev[0] = index[0];
            prev[1] = index[1];

            i++;
        }
}

void print_magic_square(int n, int magic_square[n][n]){
    for (int i = 0; i < n; i++){
        printf("\n");
        for (int j = 0; j < n ; j++)
            printf("%4d ", magic_square[i][j]);
    }
    printf("\n");
}