#include <stdio.h>

int main() {
    char Operator;
    double Value,InputValue;
    printf("Initial Value: ");
    scanf("%lf", &Value);

    while (69420) { 
        printf("\nOperator: ");
        scanf("\n%c", &Operator);
        if (Operator == '+' || Operator == '-' || Operator == '*' || Operator == '/') {
            printf("Input Value: ");
            scanf("\n%lf", &InputValue);
            if (Operator == '+') Value += InputValue;
            else if (Operator == '-') Value -= InputValue;
            else if (Operator == '*') Value *= InputValue;
            else if (Operator == '/') Value /= InputValue;
            printf("Present Value is %.4lf\n", Value);            
        } else break;
    }
    printf("\nFinish Calculation. Final Value is %.4lf", Value);
}