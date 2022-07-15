// Count the number of vowels in a word

#include <stdio.h>
#include <ctype.h>

int main (void) {
    int vowels = 0;

    printf("Enter a sentence: ");
    for (char c = toupper(getchar()); c != '\n'; c = toupper(getchar()))
        switch (c) {
            case 'A': case 'E': case 'I': case 'O': case 'U': vowels++; break;
        }
    
    printf("Your sentence contains %d vowels\n", vowels);
    return 0;
}