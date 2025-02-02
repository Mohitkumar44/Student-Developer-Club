#include <stdio.h>
int main()
{
    int time_in_seconds, hours, minutes, seconds;  //variables

    printf("Enter time in seconds : ");
    scanf("%d", &time_in_seconds);                   // taking inputs
    
    // converting....

    hours = time_in_seconds / (60 * 60);
    minutes = (time_in_seconds % (60 * 60)) / 60;
    seconds = (time_in_seconds % (60 * 60)) % 60;
    
    printf("%02d:%02d:%02d", hours, minutes, seconds);    // result.

    return 0;
}