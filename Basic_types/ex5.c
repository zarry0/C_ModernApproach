// Computes the value of a word by summing the values of its letters (Scrabble)
#include <stdio.h>
#include <ctype.h>

int main (void) {
    
    printf("Enter a word: ");
    char letter = getchar();
    int value = 0;

    while (letter != '\n') {
        letter = toupper(letter);
        if (letter < 'A' || letter >'Z') {
            letter = getchar();
            continue;
        }

        switch (letter) {
            case 'K':                                           value += 5;  break;
            case 'D': case 'G':                                 value += 2;  break;
            case 'J': case 'X':                                 value += 8;  break;
            case 'Q': case 'Z':                                 value += 10; break;
            case 'B': case 'C': case 'M': case 'P':             value += 3;  break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':   value += 4;  break;
            
            default:                                            value += 1;  break;
        }
        letter = getchar();
    }
    printf("Scrabble value: %d\n", value);
    return 0;
}