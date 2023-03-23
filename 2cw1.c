#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
    }

    printf("The reversed number is: %d\n", reversed_num);

    return 0;
}
//output
Enter an integer: 10
The reversed number is: 1//