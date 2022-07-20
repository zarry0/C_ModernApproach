// Takes two words and determines if they're anagrams of each other
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts[26], int counts2[26]);

int main (void) {

    int word1Count[26] = {0};
    int word2Count[26] = {0};

    read_word(word1Count);
    read_word(word2Count);

    if (equal_array(word1Count, word2Count))
        printf("The words are anagrams\n");
    else
        printf("The words are not anagrams\n");

    return 0;
}

void read_word(int counts[]){
    char c;
    printf("Enter a word: ");
    while ((c = getchar()) != '\n') {
        if(isalpha(c) != 0)
            counts[tolower(c) - 'a']++;
    }
}

bool equal_array(int counts[26], int counts2[26]){
    for (int i = 0; i < 26; i++)
        if (counts[i] != counts2[i])
            return false;
    return true;
}