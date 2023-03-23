#include <stdio.h>
#include <math.h>

int main() {
   int num, originalNum, remainder, result = 0, n = 0;
   printf("Input number: ");
   scanf("%d", &num);
   originalNum = num;

   // Counting the number of digits
   while (originalNum != 0) {
      originalNum /= 10;
      ++n;
   }

   originalNum = num;

   // Calculating the result
   while (originalNum != 0) {
      remainder = originalNum % 10;
      result += pow(remainder, n);
      originalNum /= 10;
   }

   if (result == num) {
      printf("%d is an Armstrong number.", num);
   } else {
      printf("%d is not an Armstrong number.", num);
   }

   return 0;
}
