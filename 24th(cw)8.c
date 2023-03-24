#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;

    if (exponent == 0) {
        return 1.0;
    } else if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } else {
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
    }

    return result;
}

int main() {
    double base, result;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%lf raised to the power of %d is %lf\n", base, exponent, result);

    return 0;
}
//output: Enter base: 2
Enter exponent: 3
2.000000 raised to the power of 3 is 8.//
