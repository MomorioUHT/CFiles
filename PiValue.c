#include <stdio.h>

int main() {
    int n; double result=0; 
    printf("Enter n: ");
    scanf("\n%d", &n);
    for (int i=1; i<=n; i++) {
        if (i == 1) { result += 4.0; }
        else if (i%2 == 0) {result -= (4.0)/((2.0*i)-1.0);}
        else {result += (4.0)/((2.0*i)-1.0);}
    }
    printf("%.10lf",result);
    return 0;
}