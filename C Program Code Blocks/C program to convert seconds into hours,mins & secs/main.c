/*Illustrates the modulus operator*/
/*Inputs a number of seconds, and converts into hours,mins and secs*/

#include <stdio.h>
#include <stdlib.h>

/*Define constants*/

#define SECS_PER_MIN 60
#define MINS_PER_HOUR 60
#define SECS_PER_HOUR 3600

unsigned int seconds,minutes,hours,secs_left,mins_left;

 int main()
{
    /*Input of a number of seconds by user*/
    printf("Enter the number of seconds (<65000): ");
    scanf("%u", &seconds);

    hours = seconds / SECS_PER_HOUR;
    minutes = seconds / SECS_PER_MIN;
    mins_left = minutes % MINS_PER_HOUR;
    secs_left = seconds % SECS_PER_MIN;

    printf("%u seconds is equal to ",seconds);
    printf("%u h, %u m, %u s", hours, mins_left, secs_left);

    return 0;
}
