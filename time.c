#include <stdio.h>
#include "numSeconds.h"

int main(void)
{
    int hours, minutes, seconds;
    int totalSeconds;

    hours = 0;
    minutes = 0;
    seconds = 0;
    printf("Enter hours: ");
    scanf("%d", &hours);
    printf("Enter minutes: ");  
    scanf("%d", &minutes);
    printf("Enter seconds: ");
    scanf("%d", &seconds);
    
    totalSeconds = numSeconds(hours, minutes, seconds);
    printf("Total seconds for %d hours, %d minutes, and %d seconds is %d\n", hours, minutes, seconds, totalSeconds);
    return 0;
}
