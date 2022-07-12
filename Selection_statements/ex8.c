/* 
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 8
   The following table shows the daily flights from 
   one city to another:
   Departure time   Arrival time
   -----------------------------
    8:00 am         10:15 am
    9:43 am         11:52 am
   11:19 am          1:31 pm
   12:47 pm          3:00 pm
    2:00 pm          4:08 pm
    3:45 pm          5:55 pm
    7:00 pm          9:20 pm
    9:45 pm         11:58 pm
   Write a program that asks user to enter a time
   (expressed in hours and minutes, using the 24-hour
   clock). The program then displays the departure and
   arrival times for the flight whose departure time is
   closest to that entered by the user:
       Enter a 24-hour time: 13:15
       Closest departure time is 12:47 pm, arriving at 3:00 pm
   Hint: Convert the input into a time expressed in minutes
   since midnight, and compare it to the departure times, also
   expressed in minutes since midnight. For example, 13:15 is
   13 x 60 + 15 = 795 minutes since midnight, which is closer to
   12:47 pm (767 minutes since midnight) than to any of the
   other departure times.
*/

// Displays 24-hour time in 12-hour format
#include <stdio.h>

int main (void) {
    int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    int minutesSinceMidnight = hours * 60 + minutes;

    int departureHours[] =   { 8, 9,11,12, 2, 3, 7, 9};
    int departureMinutes[] = {00,43,19,47,00,45,00,45};
    int pmTimeDeparture = 3;

    int arrivalHours[] =     {10,11, 1, 3, 4, 5, 9,11};
    int arrivalMinutes[] =   {16,52,31,00, 8,55,20,58};
    int pmTimeArrival = 2;

    int departureMidnight[] = {
         departureHours[0]       * 60 + departureMinutes[0],
         departureHours[1]       * 60 + departureMinutes[1],
         departureHours[2]       * 60 + departureMinutes[2],
         departureHours[3]       * 60 + departureMinutes[3],
        (departureHours[4] + 12) * 60 + departureMinutes[4],
        (departureHours[5] + 12) * 60 + departureMinutes[5],
        (departureHours[6] + 12) * 60 + departureMinutes[6],
        (departureHours[7] + 12) * 60 + departureMinutes[7],
    };

    int index;
    if (minutesSinceMidnight < departureMidnight[0])                                                        index = 0;
    else if (minutesSinceMidnight >= departureMidnight[0] && minutesSinceMidnight < departureMidnight[1])
    {
        if  (minutesSinceMidnight - departureMidnight[0] > departureMidnight[1] - minutesSinceMidnight)     index = 1;
        else                                                                                                index = 0;
    }
    else if (minutesSinceMidnight >= departureMidnight[1] && minutesSinceMidnight < departureMidnight[2])
    {
        if  (minutesSinceMidnight - departureMidnight[1] > departureMidnight[2] - minutesSinceMidnight)     index = 2;
        else                                                                                                index = 1;
    }
    else if (minutesSinceMidnight >= departureMidnight[2] && minutesSinceMidnight < departureMidnight[3])
    {
        if  (minutesSinceMidnight - departureMidnight[2] > departureMidnight[3] - minutesSinceMidnight)     index = 3;
        else                                                                                                index = 2;
    }
    else if (minutesSinceMidnight >= departureMidnight[3] && minutesSinceMidnight < departureMidnight[4])
    {
        if  (minutesSinceMidnight - departureMidnight[3] > departureMidnight[4] - minutesSinceMidnight)     index = 4;
        else                                                                                                index = 3;
    }
    else if (minutesSinceMidnight >= departureMidnight[4] && minutesSinceMidnight < departureMidnight[5])
    {
        if  (minutesSinceMidnight - departureMidnight[4] > departureMidnight[5] - minutesSinceMidnight)     index = 5;
        else                                                                                                index = 4;
    }
    else if (minutesSinceMidnight >= departureMidnight[5] && minutesSinceMidnight < departureMidnight[6])
    {
        if  (minutesSinceMidnight - departureMidnight[5] > departureMidnight[6] - minutesSinceMidnight)     index = 6;
        else                                                                                                index = 5;
    }
    else if (minutesSinceMidnight >= departureMidnight[6] && minutesSinceMidnight < departureMidnight[7])
    {
        if  (minutesSinceMidnight - departureMidnight[6] > departureMidnight[7] - minutesSinceMidnight)     index = 7;
        else                                                                                                index = 6;
    }
    else                                                                                                    index = 7;

    printf("Closest departure time is ");
    char timeDeparture = 'a';
    char timeArrival = 'a';
    if (index >= pmTimeDeparture) timeDeparture = 'p';
    if (index >= pmTimeArrival) timeArrival = 'p';
    printf("%d:%.2d %cm, arriving at %d:%.2d %cm\n", departureHours[index], departureMinutes[index], timeDeparture, arrivalHours[index], arrivalMinutes[index], timeArrival);

    return 0;
}