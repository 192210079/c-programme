#include <stdio.h>

int main() {
   int n, arr[100], *ptr;
   
   printf("Total number of elements: ");
   scanf("%d", &n);
   
   printf("Enter %d numbers in array: ", n);
   for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
   
   ptr = arr;
   
   printf("Elements in array are: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", *ptr);
      ptr++;
   }
   
   return 0;
}
