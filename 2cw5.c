#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("The sum of natural numbers from 1 to %d is %d", n, sum);

    return 0;
}
//output
Enter a positive integer: 5
The sum of natural numbers from 1 to 5 is 15//
