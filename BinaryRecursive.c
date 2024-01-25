#include <stdio.h>
#include <stdlib.h>

unsigned long long convertToBinary(unsigned long long x) {
    if (x == 0) { return 0; }
    else { return ((x % 2) + (10 * convertToBinary(x/2))); }
}

int main() {
    char x_str[20];
    fgets(x_str, 22, stdin);
    unsigned long long x = atoll(x_str);

    if (x < 0) {return 0;}
    else {printf("%llu", convertToBinary(x));}
    return 0;
}