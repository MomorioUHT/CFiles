#include <stdio.h>

void check(char current[], char latest[], int Length, int *p) {
    if (*p == 0) {
        int VL = 0;
        for (int i=0; i<Length; i++) if (current[i] != latest[i]) VL+=1;

        if (VL <= 2) 
            for (int i=0; i<Length; i++) latest[i] = current[i];
        else *p = 1;
    } 
}

int main() {
    int strLen = 0, amount = 0, cut = 0;
    char curr[1900], latest[1900];

    int *p;
    p = &cut;

    scanf("\n%d", &strLen);
    scanf("\n%d", &amount);
    for (int i=0; i<amount; i++) {
        scanf("%s", curr);
        if (latest[0] != '\0') check(curr, latest, strLen, p);
        else 
            for (int i=0; i<strLen; i++) latest[i] = curr[i];
    }

    printf("%s", latest);
}