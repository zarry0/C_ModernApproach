// Generates a random walk across a 10x10 array
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define start 0

void generate_random_walk(char walk[N*N]);
void print_array(char walk[N*N]);

int main (void) {
    char grid[N*N];
    
    generate_random_walk(grid);
    print_array(grid);

    return 0;
}

void generate_random_walk(char grid[N*N]) {
for (int j = 0; j < N*N; j++)
        grid[j] = '.';

    int nextMove, i = start, prev = i;
    grid[i] = 'A';
    bool isDone = false;
    bool availableMoves[4] = {false};

    srand((unsigned) time(NULL));

    for (char c = 'B'; c <= 'Z'; c++){

        if (isDone) break;

        for (int j = 0; j < 4; j++) availableMoves[j] = false;

        while (!isDone) {

            nextMove = rand() % 4;
            availableMoves[nextMove] = true;

            if (nextMove == 0 && (0 <= i && i < N))             // ↑
                continue;
            if (nextMove == 1 && (i % N == N-1))                // →
                continue;
            if (nextMove == 2 && (i >= N*N-N && i < N*N))       // ↓
                continue;
            if (nextMove == 3 && (i % N == 0))                  // ←
                continue;

            prev = i;

            switch (nextMove) {
                case 0: i -= N; break; // ↑ 
                case 1: i += 1; break; // → 
                case 2: i += N; break; // ↓ 
                case 3: i -= 1; break; // ← 
            }

            if (grid[i] != '.'){
                i = prev;

                for (int j = 0; j < 4; j++) {
                    if (!availableMoves[j]){
                        break;
                    }else if (j == 3) isDone = true;
                }

            }else{
                grid[i] = c;
                break;
            }

        }
    }
}

void print_array(char grid[N*N]){
    for (int i = 0; i < N*N; i++) {
        if (i % N == 0) printf("\n");
        printf("%c ", grid[i]);
    }
    printf("\n");
}