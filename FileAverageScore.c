#include <stdio.h>

double findAverage(char *filename)
{
    FILE *file = fopen(filename, "r");
    double count = 0, sum = 0, curr;
    while (fscanf(file, "%lf", &curr) == 1) { 
        sum += curr;
        count++;
    }
    fclose(file);
    return sum/count;    
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}