#include <stdio.h>

int main() {
    int arr[100], n, i, largest1, largest2;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // find the largest element in the array
    largest1 = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest1) {
            largest1 = arr[i];
        }
    }

    // find the second largest element in the array
    largest2 = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] != largest1 && arr[i] > largest2) {
            largest2 = arr[i];
        }
    }

    printf("The largest two elements in the array are %d and %d\n", largest1, largest2);

    return 0;
}
//output
Enter the size of the array: 100
Enter the elements of the array: n,i,largest1,largest2
The largest two elements in the array are 1919184481 and 778332527

[Process completed - press Enter]//
