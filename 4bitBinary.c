#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,index=3,data[4];
    char x_str[5];
    fgets(x_str, 6, stdin);
    x = atoi(x_str);

    printf("Binary number of %d is ", x);
    while(index >= 0) {
        data[index] = x & 1;
        index--;
        x >>= 1;
    }
    for (int i=0; i<4 ; i++) { printf("%d", data[i]); }
    printf(".");

    return 0;
}