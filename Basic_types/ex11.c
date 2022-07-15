// Takes a first and last name and outputs the lastname, first name initial.
#include <stdio.h>
#include <stdbool.h>

int main (void) {

    printf("Enter a first and last name: ");

    char c = getchar(), initial, prev = c;
    int counter = 0;
    bool isLastname = false;

    while(c != '\n'){
        if (c == ' ') {
            prev = c;   
            c = getchar();
            continue;
        }

        counter++;
        if (counter == 1) initial = c;
        else if (counter > 1 && prev == ' ') isLastname = true;

        if (isLastname) putchar(c);
        prev = c;   
        c = getchar();
    }

    printf(", %c.\n", initial);

    return 0;
}


/*
*********** Alt solution from raywritescode: https://github.com/raywritescode/cpma2/blob/master/ch07/c7p11.c ***********
#include <stdio.h>

int main(void)
{
    char first_initial, last_name;
   
    printf("\nEnter a first and last name: ");
    scanf(" %c", &first_initial);    // gets first letter of first name. Ignores leading blank spaces. 

    while (getchar() != ' ') {
        // ignore remaining first name characters until a blank space is reached  
    }

    while ((last_name = getchar()) != '\n') {
        if (last_name == ' ');
            // ignore blank spaces before and after last name 
        else
            printf("%c", last_name);
    }       

    printf(", %c.\n\n", first_initial); 

    return 0;
} 
*/