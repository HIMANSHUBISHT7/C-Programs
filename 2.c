#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at the middle
        if (arr[mid] == target) {
            return mid; // Return the index if the target is found
        }

        // If target is greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
    int target = 77;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
