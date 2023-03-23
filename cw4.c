#include <stdio.h>

int largest(int arr[], int n);

int main() {
   int n, arr[100];
   printf("Input the number of elements to be stored in the array: ");
   scanf("%d", &n);
   printf("Input %d elements in the array:\n", n);
   for (int i = 0; i < n; i++) {
      printf("element - %d : ", i);
      scanf("%d", &arr[i]);
   }
   printf("The largest element in the array is %d", largest(arr, n));
   return 0;
}

int largest(int arr[], int n) {
   int max = arr[0];
   for (int i = 1; i < n; i++) {
      if (arr[i] > max) {
         max = arr[i];
      }
   }
   return max;
}
