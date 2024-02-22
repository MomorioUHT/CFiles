#include <stdio.h>

struct complex {
    float real;
    float imaginary;
};

struct complex add_complex(struct complex x, struct complex y){
    struct complex result;
    result.real = x.real + y.real;
    result.imaginary = x.imaginary + y.imaginary;
    return result;    
}

struct complex multiply_complex(struct complex x, struct complex y){
    struct complex result;
    result.real = (x.real * y.real) - (x.imaginary * y.imaginary);
    result.imaginary = (x.real * y.imaginary) + (x.imaginary * y.real);
    return result;    
}

void print_complex(char text[], struct complex x) {
    if (x.imaginary == 0.0) printf("%s%.1f\n", text, x.real);
    else if (x.real == 0.0) printf("%s%.1fi\n", text, x.imaginary);
    else if (x.real == 0.0 && x.imaginary == 0.0) printf("%s0.0\n", text);
    else if (x.imaginary < 0) {
    float last = -x.imaginary;
    printf("%s%.1f - %.1fi\n", text, x.real, last);
    }
    else printf("%s%.1f + %.1fi\n", text, x.real, x.imaginary);    
}

int main() {
    struct complex C,D,E,F;
    printf("Enter C: ");
    scanf("%f %f", &C.real, &C.imaginary);
    printf("Enter D: ");
    scanf("%f %f", &D.real , &D.imaginary);
    
    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}