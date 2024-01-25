#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary, total;
    char salary_str[10];
    fgets(salary_str, 10, stdin);

    salary = atof(salary_str);

    if (salary < 0) {
        printf("Error: Salary must be greater or equal to 0");
        return 0;
    } 
    else if (salary <= 300000) { total = 0.05 * salary; } 
    else if (salary > 300000) { total = ((salary - 300000) * 0.1) + (300000 * 0.05); }

    printf("%.2f", total);
    return 0;
}