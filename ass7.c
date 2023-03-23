#include <stdio.h>

int main() {
    int n = 5;  // change this value to adjust the size of the hill
    int i, j, k;

    for (i = 1; i <= n; i++) {
        for (j = n - i; j > 0; j--) {
            printf("  ");  // print 2 spaces for each missing digit
        }
        for (k = 1; k <= i; k++) {
            printf("%d ", k);  // print the digits in order
        }
        printf("\n");
    }

    return 0;
}
//output :         1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5//
