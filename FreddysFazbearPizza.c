#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14

int main()
{
    char size_str[3],pepperoni_str[3],cheese_str[3],mushroom_str[3];
    int fixedcost = 5, basecost = 2;
    double area,cost, extracost = 0;

    printf("Welcome to My Pizza Shop!!\n"); 
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n"); 
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size_str, 3, stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoni_str, 3, stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese_str, 3, stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroom_str, 3, stdin);

    int size = atoi(size_str);
    int pepperoni = atoi(pepperoni_str);
    int cheese = atoi(cheese_str);
    int mushroom = atoi(mushroom_str);

    (size == 1) && (area = (M_PI * (10.0)*(10.0)) / 4);
    (size == 2) && (area = (M_PI * (16.0)*(16.0)) / 4);
    (size == 3) && (area = (M_PI * (20.0)*(20.0)) / 4);

    (pepperoni == 1) && (extracost += 0.50);
    (cheese == 1) && (extracost += 0.25);
    (mushroom == 1) && (extracost += 0.30);

    cost = 1.5*(5+(2*area)+(extracost*area));

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Your order costs %.2f baht.\n", cost);
    printf("Thank you.");
    return 0;
}