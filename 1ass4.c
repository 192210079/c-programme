#include <stdio.h>

int main() {
    int n, i, j, isUnique;
    printf("Print all unique elements of an array:\n------------------------------------------\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d elements in the array:\n", n);
    for(i=0; i<n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    // Checking for unique elements
    printf("\nThe unique elements in the array are: ");
    for(i=0; i<n; i++) {
        isUnique = 1; // Assume that the element is unique
        for(j=0; j<i; j++) {
            if(arr[i] == arr[j]) {
                isUnique = 0; // Element is not unique
                break;
            }
        }
        if(isUnique) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
