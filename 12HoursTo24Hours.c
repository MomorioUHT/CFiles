#include <stdio.h>
#include <string.h>

int main() {
    int hours,minutes;
    char indicator[4];
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%02d:%02d %s",&hours,&minutes,&indicator);
    if ((strcmp(indicator, "PM") == 0 || strcmp(indicator, "pm") == 0) && hours != 12) hours += 12;
    else if ((strcmp(indicator, "AM") == 0 || strcmp(indicator, "am") == 0) && hours == 12) hours = 0; 
    printf("Equivalent 24-hour time: %02d:%02d", hours, minutes);
    return 0;
}
