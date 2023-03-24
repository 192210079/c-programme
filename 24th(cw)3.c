#include <stdio.h>
#include <stdbool.h>

// Define a function to check if a number is prime
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n;
    
    // Ask the user for the value of n
    printf("Enter a value for n: ");
    scanf("%d", &n);
    
    // Find the first n prime numbers
    int count = 0, num = 2;
    printf("The first %d prime numbers are: ", n);
    while (count < n) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    
    // Find the nth prime number
    count = 0, num = 2;
    while (count < n) {
        if (is_prime(num)) {
            count++;
        }
        if (count == n) {
            printf("The %dth prime number is: %d\n", n, num);
        }
        num++;
    }
    
    return 0;
}
//output: Enter a value for n: 3
The first 3 prime numbers are: 2 3 5 
The 3th prime number is: 5//
