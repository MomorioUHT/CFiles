#include <stdio.h>

unsigned long long int check(unsigned long long int num, unsigned long long int square){
    while(num != 0) {
        if(num % 10 != square % 10) { return 0; }      
        num /= 10;
        square /= 10;
    }
    return 1;
}

int main ()
{
    unsigned long long int num;
    unsigned long long int square;

    printf("Input n = ");
    scanf("%llu", &num);

    square = num*num;
    printf("n^2 = %llu\n", square);
    
    if(check(num,square)) { printf("Yes. %llu is automorphic number.",num); }
    else { printf("No. %llu is not automorphic number.",num); }
    return 0;
}