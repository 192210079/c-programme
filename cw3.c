#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // not prime
    }
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0; // not prime
        }
    }
    return 1; // prime
}

int main() {
    int num;

    printf("Input a positive number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
