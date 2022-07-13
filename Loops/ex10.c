// Takes n dates and indicates which comes first
#include <stdio.h>
#include <stdbool.h>

int main (void) {
    int day, month, year;
    int earliestDay, earliestMonth, earliestYear;

    printf("Enter a date (mm/dd/yy) : ");
    scanf("%d /%d /%d", &month, &day, &year);

    earliestDay = day;
    earliestMonth = month;
    earliestYear = year;

    while (true) {

        printf("Enter a date (mm/dd/yy) : ");
        scanf("%d /%d /%d", &month, &day, &year);

        if (day == 0 || month == 0 || year == 0) break;

        if (year < earliestYear){
            earliestDay = day;
            earliestMonth = month;
            earliestYear = year;
        }else if (year == earliestYear){
            if (month < earliestMonth) {
                earliestDay = day;
                earliestMonth = month;
                earliestYear = year;
            }else if (month == earliestMonth) {
                if (day < earliestDay) {
                    earliestDay = day;
                    earliestMonth = month;
                    earliestYear = year;

                }
            }
        }

    }

    printf("%d/%d/%.2d is the earliest date\n", earliestMonth, earliestDay, earliestYear);


    return 0;
}