#include<stdio.h>

int main() {
    int computer_time = 785; 
    int days = computer_time/1440;
    int hours = (computer_time%1440)/60;
    int minutes = (computer_time%1440)%60;
    printf("It is %d days %d hours and %d minutes.", days, hours, minutes);
    return 0;
}