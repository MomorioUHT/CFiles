#include<stdio.h>
#include<stdlib.h>

int main(){
    char n_str[10];
    int n,i,j;
    fgets(n_str, 12, stdin);
    n = atoi(n_str);

    for (i=0; i<n; ++i) {
        for (j=0; j<i; ++j) {printf("*");}
        (i != 0) && (printf("\n"));
    }
    for (i=n; i>=1; --i) {
        for (j=1; j<=i; ++j) {printf("*");}
        printf("\n");
    }
    return 0;
}