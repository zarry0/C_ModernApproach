// Computes the average word length for a sentence
#include <stdio.h>

int main (void) {
    char letter, prev = ' ';
    float average;
    int words = 0, letters = 0;
    printf("Enter a sentence: ");

    while ((letter = getchar()) != '\n'){
        if (letter != ' ' && prev == ' ') words++;
        if (letter != ' ') letters++;
        prev = letter;
    }

    average = (float) letters / words;
    printf("Average word length: %.1f\n", average);
    return 0;
}