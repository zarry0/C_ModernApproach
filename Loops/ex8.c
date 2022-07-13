//Prints a one month calendar 
#include <stdio.h>

int main (void) {
    int nDays, startDay;
    printf("Enter number of days in month: ");
    scanf("%d", &nDays);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startDay);
    
    startDay %= 8;

    for (int j = 1, i = 1; j <= nDays; i++) {

        if (i >= startDay){
            printf("%4d", j);
            j++;
        }
        else{
            printf("%4c", 32);
        }

        if (i % 7 == 0) printf("\n");
    }
    printf("\n");
    return 0;
}