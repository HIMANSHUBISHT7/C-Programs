#include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int size) {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < size - 1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11, 90, 34, 55, 7, 40 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, size);

    selectionSort(arr, size);

    printf("Sorted array: \n");
    printArray(arr, size);

    return 0;
}
