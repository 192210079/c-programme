#include <stdio.h>

int square(int num) {
   return num * num;
}

int main() {
   int num, sq;

   printf("Enter a number to find its square: ");
   scanf("%d", &num);

   sq = square(num);

   printf("The square of %d is %d.\n", num, sq);

   return 0;
}
