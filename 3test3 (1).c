#include <stdio.h>

void calculate(int num1, int num2, int *sum, int *difference, int *product);

int main() {
    int num1, num2, sum, difference, product;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    calculate(num1, num2, &sum, &difference, &product);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    return 0;
}

void calculate(int num1, int num2, int *sum, int *difference, int *product) {
    *sum = num1 + num2;
    *difference = num1 - num2;
    *product = num1 * num2;
}

//output:
Enter two integers: 10 20
Sum = 30
Difference = -10
Product = 200//

