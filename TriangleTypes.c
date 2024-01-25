#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a_str[3],b_str[3],c_str[3];
    printf("Enter length of side A: ");
    fgets(a_str, 3, stdin);
    printf("Enter length of side B: ");
    fgets(b_str, 3, stdin);
    printf("Enter length of side C: ");
    fgets(c_str, 3, stdin);

    float a = atoi(a_str); 
    float b = atoi(b_str); 
    float c = atoi(c_str);

    if (a + b <= c || a + c <= b || b + c <= a) { printf("Triangle type is invalid."); } 
    else if (a == b && a == c && b == c) { printf("Triangle type is equilateral."); } 
    else if (a == b || b == c || c == a) { printf("Triangle type is isosceles."); }
    else if (a != b && a != c && b != c) { printf("Triangle type is scalene."); }
    return 0;
}