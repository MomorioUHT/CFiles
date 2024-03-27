#include <stdio.h>
#include <stdlib.h>

void SortArray(int* arr, int number) {
    int i,j,key;
    for (i=0; i<number; i++) {
        key = arr[i];
        j = i - 1;
        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int n, num;
    
    printf("Number: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i=0; i<n ;i++) {
        scanf("\n%d", &arr[i]);
    }

    SortArray(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}