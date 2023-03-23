#include <stdio.h>

int main() {
   char str[100];
   int alphabets = 0, digits = 0, special = 0;
   printf("Input the string: ");
   fgets(str, sizeof(str), stdin);

   for (int i = 0; str[i] != '\0'; i++) {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
         alphabets++;
      } else if (str[i] >= '0' && str[i] <= '9') {
         digits++;
      } else {
         special++;
      }
   }

   printf("Total Alphabets: %d\n", alphabets);
   printf("Total Digits: %d\n", digits);
   printf("Total Special Characters: %d\n", special);

   return 0;
}
