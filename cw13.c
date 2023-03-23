#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++)     
        for (j = 0; j < n-i-1; j++) 
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

int main() {
    int n;
    printf("Input no. of elements in array:");
    scanf("%d", &n);
    int arr[n];
    printf("Input %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    return 0;
}
