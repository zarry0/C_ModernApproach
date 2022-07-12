// Displays 24-hour time in 12-hour format
#include <stdio.h>

int main (void) {
    int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours < 12) {
        if (hours == 0) hours = 12;
        printf("Equivalent 12-hour time: %d:%.2d AM\n", hours, minutes);
    }else {
        if (hours == 12) hours = 24;
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hours-12, minutes);
    }

    return 0;
}