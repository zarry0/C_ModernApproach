// Takes two dates and indicates which comes first
#include <stdio.h>

int main (void) {
    int day1, day2, month1, month2, year1, year2;
    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d /%d /%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy) : ");
    scanf("%d /%d /%d", &month2, &day2, &year2);

    if (year1 > year2) //date 1
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
    else if (year2 > year1) //date 2
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
    //year1 = year2
    else if (month1 > month2) //date 1
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
    else if (month2 > month1) //date 1
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
    //month1 == month2
    else if (day1 > day2) //date 1
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month2, day2, year2, month1, day1, year1);
    else if (day2 > day1) //date 2
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);
    else //date 1 == date 2
        printf("%d/%d/%.2d is the same date as %d/%d/%.2d\n", month1, day1, year1, month2, day2, year2);

    return 0;
}