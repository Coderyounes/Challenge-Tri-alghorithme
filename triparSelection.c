#include "main.h"

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size) {
    int i, j, temp, min_idx;

    for (i = 0; i < size; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }

            if (min_idx != i) {
                swap(&arr[min_idx], &arr[i]);
            }
        }
    }
}

int main() {
    int arr[] = {12, 96, 480, 14, 2, 4, 9, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);
    return (0);
}