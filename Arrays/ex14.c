//Reverse the order of the words in a sentence
#include <stdio.h>

int main (void) {
    printf("Enter a sentence: ");

    char word[50], sentence[200], c;
    int wIndex = 0, sentenceIndex = 0;

    while ((c = getchar()) != '\n') {
        if (c == '.' || c == '?' || c == '!')
            break;

        if (c == ' ') {
            for (int j = wIndex - 1; j >= 0; j--)
                sentence[sentenceIndex++] = word[j];
            sentence[sentenceIndex++] = c;
            wIndex = 0;
        }else
            word[wIndex++] = c;
        
    }

    for (int j = wIndex - 1; j >= 0; j--)
        sentence[sentenceIndex++] = word[j];

    printf("Reversal of sentence: ");
    for (int i = sentenceIndex - 1; i >= 0; i--)
        printf("%c", sentence[i]);
    printf("%c\n", c);
    return 0;
}