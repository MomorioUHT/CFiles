#include <stdio.h>
#include <stdlib.h>

char createTiles(int n, int size) {
    if (size == 0) {
        printf("%c",n);
        return 0;
    }
    int START = n-size;
    int END = n;

    for (int i=END; i > START; i--) {
        printf("%c-", (char)i);
    }
    for (int i=START; i <= END; i++) {
        if (i != END) { printf("%c-", (char)i); }
        else { printf("%c", (char)i); } 
    }
}

int main() {
    char n_str[10];
    fgets(n_str, 10, stdin);
    int n = atoi(n_str);
    if (n <= 0 || n > 26) { 
        printf("-");
        return 0;
    }
    int max_len = (n+n-1) + (n+n-1) -1;
    int symbol_size = (n+n-1) - 1;
    int END = n+96;
    int START = n+95;
    int stepsize = 0;
    int t;
    
    //Upper loop
    for (int i = symbol_size; i >= 0; i-=2) {
        for (int j = i; j > 0; j--) { printf("-"); }
        for (t = END; t > START; t--) { 
            createTiles(t,stepsize);
            stepsize += 1;
        }
        for (int j = i; j > 0; j--) { printf("-"); }
        printf("\n");
    }

    stepsize -= 2;
    START += 1;
    //lower loop
    for (int i = 2; i <= symbol_size; i+=2) {
        for (int j = i; j > 0; j--) { printf("-"); }
        for (int t = START; t <= END; t++) { 
            createTiles(t,stepsize);
            stepsize -= 1;
        }
        for (int j = i; j > 0; j--) { printf("-"); }
        printf("\n");
    }
    return 0;
}