#include <stdio.h>

int main() {
    int arr[] = { 5, 2, 8, 4, 6, 1 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int X = 8;
    int i;

    for (i = 0; i < N; i++) {
        if (arr[i] == X) {
            printf("Index of %d is %d\n", X, i);
            return 0;
        }
    }

    printf("%d not found in the array\n", X);
    return -1;
}
