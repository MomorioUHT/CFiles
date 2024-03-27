#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int count = 1;
    printf("Rows: ");
    scanf("%d", &rows);

    printf("Col: ");
    scanf("%d", &cols);

    int **matrix = (int **)malloc(rows* sizeof(int));

    for (int i=0; i<rows ;i++) {
        matrix[i] = (int *)malloc(cols* sizeof(int));
        for (int j=0; j<cols; j++) {
            matrix[i][j] = count;
            count++;
        }
    }

    printf("Your matrix\n");
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}