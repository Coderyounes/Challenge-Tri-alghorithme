#include "main.h"

void insertionSort(int arr[], int n) {
    int i, j, key;

    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


int main() {
    int arr[] = {12, 96, 480, 14, 2, 4, 9, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    insertionSort(arr, size);
    printArray(arr, size);
    return (0);
}