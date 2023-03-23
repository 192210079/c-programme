#include <stdio.h>

// Function to check if a number is even or odd
int isEven(int num) {
    if (num % 2 == 0) {
        return 1; // number is even
    } else {
        return 0; // number is odd
    }
}

int main() {
    int num;

    printf("Input any number: ");
    scanf("%d", &num);

    if (isEven(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}
