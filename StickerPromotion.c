#include <stdio.h>
#include <stdlib.h>

int main()
{
    char original_str[20], buyAmt_str[20];
    int left, discount_percentage;
    float discounted;

    fgets(original_str, 20, stdin);
    fgets(buyAmt_str, 20, stdin);

    double buyAmt = atof(buyAmt_str);
    int original = atoi(original_str);

    if (original <= 0) {
        discount_percentage = 0;
        discounted = buyAmt;
        left = original;
    } else if (original == 1) {
        discount_percentage = 10;
        discounted = buyAmt * 0.9;
        left = original - 1;
    } else if (original == 2) {
        discount_percentage = 15;
        discounted = buyAmt * 0.85;
        left = original - 2;
    } else if (original >= 3 && original < 6) {
        discount_percentage = 20;
        discounted = buyAmt * 0.8;
        left = original - 3;
    } else if (original >= 6 && original < 9) {
        discount_percentage = 30;
        discounted = buyAmt * 0.7;
        left = original - 6;
    } else if (original >= 9) {
        discount_percentage = 40;
        discounted = buyAmt * 0.6;
        left = original - 9;
    } 

    printf("You get %d percents discount.\n", discount_percentage);
    printf("Total amount due is %.2f Baht.\n", discounted);
    printf("And you have %d stickers left.\n", left);  
}