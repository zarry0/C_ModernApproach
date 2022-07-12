// Convert a numerical grade to a letter grade (using switch statement)
#include <stdio.h>

int main (void) {
    int grade;
    printf("Enter a numeric grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Grade can't be less than 0 or more than 100\n");
        return 1;
    }

    int uGrade =  grade % 10, dGrade = grade / 10;
    char letter = 'A';
    switch (dGrade)
    {
    case 9: case 10:
        letter = 'A';
        break;
    case 8:
        letter = 'B';
        break;
    case 7:
        letter = 'C';
        break;
    case 6:
        letter = 'D';
        break;
    default:
        letter = 'F';
        break;
    }
    printf("Letter grade: %c\n", letter);
    return 0;
}