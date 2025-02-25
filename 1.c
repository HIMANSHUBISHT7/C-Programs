#include <stdio.h>

// Function for sequential search
int sequentialSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = { 12, 34, 56, 78, 90, 11, 22, 33, 44, 55 };
    int target = 33;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sequentialSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
