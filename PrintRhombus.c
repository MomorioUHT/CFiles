#include <stdio.h>
#include <stdlib.h>

int main() {
    char x_str[20],y_str[20];
    fgets(x_str, 22, stdin); fgets(y_str, 22, stdin);
    int x = atoi(x_str); int y = atoi(y_str);
    int space=0;
    
    for (int j=0; j<y; j++) {
        for (int k=0; k<space; k++) { printf(" "); }
        if (j == 0 || j == y-1) {
            for (int i=0; i<x; i++) { printf("*"); }            
        } else {
            for (int i=0; i<x; i++) { 
                if (i == 0 || i == x-1) { printf("*"); }
                else { printf(" "); }
            } 
        }
        printf("\n");
        space += 1;
    }
    return 0;
}