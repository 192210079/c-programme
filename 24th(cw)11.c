#include <stdio.h>

// Function declaration
int add(int num1, int num2);

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the add function and store the result in sum
    sum = add(num1, num2);

    // Print the result
    printf("Sum = %d", sum);

    return 0;
}

// Function definition
int add(int num1, int num2) {
    return num1 + num2;
}
//output: Enter first number: 10
Enter second number: 20
Sum = 30//
