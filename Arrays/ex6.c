// Translates a message into BIFF-speak
#include <stdio.h>
#include <ctype.h>

#define msgLen (int) (sizeof(msg)/sizeof(msg[0]))
int main (void) {
    char c, msg[100];
    int chars = 0;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n') 
        msg[chars++] = toupper(c);
    
    
    printf("In B1FF-speak: ");
    for (int i = 0; i < chars; i++) 
        switch (msg[i]) {
            case 'A': putchar('4'); break;
            case 'B': putchar('8'); break;
            case 'E': putchar('3'); break;
            case 'O': putchar('0'); break;
            case 'S': putchar('5'); break;

            default: putchar(msg[i]); break;
        }

    printf("!!!!!!!!!!\n");
    return 0;
}