#include <stdio.h>

int main() {
    const int constant_value = 5;
    int *ptr;

    // Assign the address of the constant variable to the pointer
    ptr = (int *) &constant_value;

    // Modify the value indirectly through the pointer
    *ptr = 10;

    // Print the original constant variable and the modified value
    printf("Constant variable value: %d\n", constant_value);
    printf("Modified value: %d\n", *ptr);

    return 0;
}
//output: Constant variable value: 5
Modified value: 10//