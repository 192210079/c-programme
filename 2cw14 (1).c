#include <stdio.h>

#define ROWS 3
#define COLS 3

void matrix_mult(int A[][COLS], int B[][COLS], int C[][COLS]) {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            C[i][j] = 0;
            for(int k = 0; k < COLS; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[ROWS][COLS] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    int B[ROWS][COLS] = {{9, 8, 7},
                         {6, 5, 4},
                         {3, 2, 1}};
    int C[ROWS][COLS];

    matrix_mult(A, B, C);

    printf("Result:\n");
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//output: Result:
30 24 18
84 69 54
138 114 90//
