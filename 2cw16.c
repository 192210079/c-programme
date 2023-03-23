#include <stdio.h>

void swap(int *x, int *y);

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
//output: Enter two integers: 10 20
Before swapping: a = 10, b = 20
After swapping: a = 20, b = 10//
