#include <stdio.h>

// Function declaration
void add();

// Global variables
int num1, num2, sum;

int main() {
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the add function
    add();

    // Print the result
    printf("Sum = %d", sum);

    return 0;
}

//output: Function definition
void add() {
    sum = num1 + num2;
}
//output: Enter first number: 10
Enter second number: 20
Sum = 30//
