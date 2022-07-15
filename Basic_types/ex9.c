
// Displays 12-hour time in 24-hour format
#include <stdio.h>
#include <ctype.h>

int main (void) {
    int hours, minutes;
    char time;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hours, &minutes, &time);

    time = toupper(time);
    if (time == 'P') hours = (hours % 12) + 12;
    else if (time == 'A' && hours == 12) hours = 0;

    printf("Equivalent 24-hour time: %d:%.2d\n", hours, minutes);

    return 0;
}