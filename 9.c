#include <stdio.h>
#include <stdlib.h>

// Function to perform counting sort
void countingSort(int arr[], int n, int max) {
    int output[n]; // Output array
    int count[max + 1];
    int i;

    // Initialize count array with zeros
    for (i = 0; i <= max; ++i) {
        count[i] = 0;
    }

    // Store count of each element in count array
    for (i = 0; i < n; ++i) {
        ++count[arr[i]];
    }

    // Modify count array such that each element stores the sum of previous counts
    for (i = 1; i <= max; ++i) {
        count[i] += count[i - 1];
    }

    // Build the output array
    for (i = n - 1; i >= 0; --i) {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }

    // Copy the output array to arr
    for (i = 0; i < n; ++i) {
        arr[i] = output[i];
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 4, 2, 2, 8, 3, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    // Find the maximum element in the array
    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    countingSort(arr, n, max);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
