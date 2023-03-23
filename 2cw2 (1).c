#include <stdio.h>

int main() {
   int n, i;
   printf("Enter the size of the array: ");
   scanf("%d", &n);
   
   int arr[n];
   printf("Enter the elements of the array:\n");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   int largest = arr[0], second_largest = arr[0];
   for (i = 1; i < n; i++) {
      if (arr[i] > largest) {
         second_largest = largest;
         largest = arr[i];
      } else if (arr[i] > second_largest && arr[i] != largest) {
         second_largest = arr[i];
      }
   }

   printf("The largest element in the array is: %d\n", largest);
   printf("The second largest element in the array is: %d\n", second_largest);

   return 0;
}
//output
Enter the size of the array: 5
Enter the elements of the array:
2
7
1
9
4
The largest element in the array is: 9
The second largest element in the array is: 7
//