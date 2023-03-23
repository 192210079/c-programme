#include <stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num*num;
}

// Function to calculate the cube of a number
int cube(int num) {
    return num*num*num;
}

// Function to calculate square and cube using a function as argument
void calculate(int num, int (*function_ptr)(int)) {
    printf("The square of %d is: %d\n", num, function_ptr(num));
    printf("The cube of %d is: %d\n", num, function_ptr(num));
}

// Main function
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    calculate(num, square); // Calculate square of the number
    calculate(num, cube); // Calculate cube of the number

    return 0;
}
//output: Enter a number: 5
The square of 5 is: 25
The cube of 5 is: 125//
