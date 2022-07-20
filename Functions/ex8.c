// Simulates the game of craps
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice();
bool play_game();

int main (void) {

    srand((unsigned) time(NULL));
    int score[2] = {0,0};
    char c;

    while (true) {
        if (play_game()) 
            score[0]++;
        else 
            score[1]++;
        
        printf("Play again? ");
        scanf(" %c", &c);
        if (c == 'n')
            break;
    }

    printf("Wins: %d    Losses: %d\n", score[0], score[1]);

    exit(EXIT_SUCCESS);
}

int roll_dice(){
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    return dice1 + dice2;
}

bool play_game () {
    int roll = roll_dice();
    printf("You rolled: %d\n", roll);

    int point;
    switch (roll) {
        case 7: case 11: 
            printf("You win!\n"); return true;
        case 2: case 3: case 12: 
            printf("You lose!\n"); return false;
        default:
            point = roll;
            printf("Your point is %d\n", point);
            break;
    }

    do {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);
        if (roll == 7){
            printf("You lose!\n");
            return false;
        }
    } while (roll != point);

    printf("You win!\n");
    return true;
}