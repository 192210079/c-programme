#include <stdio.h>

// function prototype
void swap(int x, int y);

int main() {
   int a = 10, b = 20;

   printf("Before swap, a = %d\n", a);
   printf("Before swap, b = %d\n", b);

   // calling swap function to swap values of a and b
   swap(a, b);

   printf("After swap, a = %d\n", a);
   printf("After swap, b = %d\n", b);

   return 0;
}

// function definition
void swap(int x, int y) {
   int temp;

   temp = x;
   x = y;
   y = temp;

   printf("Inside swap function, x = %d\n", x);
   printf("Inside swap function, y = %d\n", y);
}
//output: Before swap, a = 10
Before swap, b = 20
Inside swap function, x = 20
Inside swap function, y = 10
After swap, a = 10
After swap, b = 20//