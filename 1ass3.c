#include <stdio.h>

int main() {
    int n, i;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Input %d elements in the array:\n", n);
    for(i=0; i<n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    // Copying elements from arr1 to arr2
    for(i=0; i<n; i++) {
        arr2[i] = arr1[i];
    }
    printf("\nThe elements stored in the first array are: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nThe elements stored in the second array are: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
