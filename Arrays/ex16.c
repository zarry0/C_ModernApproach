// Takes two words and determines if they're anagrams of each other
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void) {
    int letters[26] = {0};
    char c;

    printf("Enter first word: ");
    while ((c = getchar()) != '\n') {
        if(isalpha(c) != 0)
            letters[tolower(c) - 'a']++;
    }
    printf("Enter second word: ");
    while ((c = getchar()) != '\n') {
        if(isalpha(c) != 0)
            letters[tolower(c) - 'a']--;
    }

    for (int i = 0; i < 26; i++){
        if (letters[i] > 0) {
            printf("The words are not anagrams\n");
            return 0;
        }
    }
    printf("The words are anagrams\n");

    return 0;
}