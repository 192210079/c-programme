#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1, mid;
    
    while (left <= right) {
        mid = (left + right) / 2;
        
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = {28, 12, 15, 122, 10, 33, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 15;
    
    int pos = binarySearch(arr, n, key);
    
    if (pos == -1) {
        printf("Element not found\n");
    }
    else {
        printf("Element found at position %d\n", pos);
    }
    
    return 0;
}
//output Element found at position 2//

