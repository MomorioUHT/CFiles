#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double calculateLength(Point first, Point second) {
    double result = sqrt(pow((second.x-first.x), 2) + pow((second.y-first.y), 2));
    if (result < 0) return -result;
    return result;
}

int main() {
    int amount;
    printf("Number of Points: ");

    Point *arr = (Point *)malloc(amount * sizeof(Point));

    scanf("%d", &amount);
    for (int i=0; i<amount; i++) {
        printf("P%d.X: ", i+1);
        scanf("%lf", &(arr[i].x));
        printf("P%d.Y: ", i+1);
        scanf("%lf", &(arr[i].y));
    }

    printf("Length:\n");
    for (int i = 0; i < amount-1; i++) {
        printf("Length from P%d(%.2f, %.2f) to P%d(%.2f, %.2f) is %.2f\n", i+1, arr[i].x, arr[i].y, i+2, arr[i+1].x, arr[i+1].y, calculateLength(arr[i], arr[i+1]));
    }    
}