#include <stdio.h>

int main() {
    int n,a,b,c;
    scanf("\n%d",&n);
    for (a=1; a<(n/2); a++) {
        for (b=1; b<(n/2) && b<a ; b++) {
            c = n-a-b;
            if (a*a + b*b == c*c) { 
                printf("(%d, %d, %d)",b,a,c);
                return 0;
            }
        }
    }
    printf("No triple found.");
    return 0;
}