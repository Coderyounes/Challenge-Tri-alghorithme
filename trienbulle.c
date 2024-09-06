#include <stdio.h>

void printArray(int arr[], int size) {
    int i;

    for (i = 0; i < size;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size) {
    int i, j, temp;

    for(i = 0; i < size; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {
    int arr[] = {12, 96, 480, 14, 2, 4, 9, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
    return (0);
}