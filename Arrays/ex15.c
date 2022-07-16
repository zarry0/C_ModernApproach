// Encrypts a sentence using Caesar's cipher
#include <stdio.h>

int main (void) {
    int shift, index;
    char msg[80], c;

    printf("Enter a message to be encrypted: ");
    while ((c = getchar()) != '\n')
        msg[index++] = c;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    char encryptedChar;
    printf("Encrypted message: ");
    for (int i = 0; i < index; i++) {
        encryptedChar = msg[i];
        if (msg[i] >= 'A' && msg[i] <= 'Z')
            encryptedChar = ((msg[i] - 'A') + shift) % 26 + 'A';
        else if (msg[i] >= 'a' && msg[i] <= 'z')
            encryptedChar = ((msg[i] - 'a') + shift) % 26 + 'a';
        putchar(encryptedChar);
    }
    putchar('\n');


    return 0;
}