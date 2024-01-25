#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x_str[5], y_str[5];

    printf("Enter the x coordinate: ");
    fgets(x_str, 5, stdin);
    printf("Enter the y coordinate: ");
    fgets(y_str, 5, stdin);

    int x = atoi(x_str);
    int y = atoi(y_str);

    (x == 0 && y == 0) && (printf("Center"));
    (x == 0 && y > 0) && (printf("North"));
    (x == 0 && y < 0) && (printf("South"));
    (y == 0 && x > 0) && (printf("East"));
    (y == 0 && x < 0) && (printf("West"));
    (x > 0 && y > 0) && (printf("North-east"));  
    (x > 0 && y < 0) && (printf("South-east")); 
    (x < 0 && y > 0) && (printf("North-west"));
    (x < 0 && y < 0) && (printf("South-west"));

    return 0;
}