#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key);

int main() {
    int arr[] = {2, 5, 7, 10, 13, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 13;
    int index = binarySearch(arr, 0, n - 1, key);
    if (index == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at index %d\n", index);
    }
    return 0;
}

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key);
    } else {
        return binarySearch(arr, mid + 1, high, key);
    }
}
//output: Element found at index 4//