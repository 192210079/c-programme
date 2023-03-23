#include <stdio.h>

int main() {
   char str[100], *ptr;
   int length = 0;
   
   printf("Input a string: ");
   gets(str);
   
   ptr = str;
   
   while (*ptr != '\0') {
      length++;
      ptr++;
   }
   
   printf("Length of the string: %d\n", length);
   
   return 0;
}
