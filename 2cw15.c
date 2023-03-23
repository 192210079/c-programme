#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, sum = 0;
    
    // Take matrix input
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display diagonal elements and calculate sum
    printf("Diagonal elements: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
                sum += matrix[i][j];
            }
        }
    }
    
    // Display sum of diagonal elements
    printf("\nSum of diagonal elements: %d\n", sum);
    
    return 0;
}
//output:Enter the elements of the matrix:
1 4 3
4 2 6
7 1 3
Diagonal elements: 1 2 3 
Sum of diagonal elements: 6//
