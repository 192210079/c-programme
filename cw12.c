#include <stdio.h>

int main() {
    int num, fact = 1, i;
    int *ptr;

    printf("Input number: ");
    scanf("%d", &num);

    ptr = &num;

    for (i = 1; i <= *ptr; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d", *ptr, fact);

    return 0;
}
