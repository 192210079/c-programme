#include <stdio.h>

int main() {
   FILE *file1, *file2;
   char ch;

   // Open the source file for reading
   file1 = fopen("file1.txt", "r");

   if (file1 == NULL) {
      printf("Error: Could not open file1.txt for reading\n");
      return 1;
   }

   // Open the destination file for writing
   file2 = fopen("file2.txt", "w");

   if (file2 == NULL) {
      printf("Error: Could not open file2.txt for writing\n");
      return 1;
   }

   // Copy contents of file1 to file2
   while ((ch = fgetc(file1)) != EOF) {
      fputc(ch, file2);
   }

   printf("Contents of file1.txt copied to file2.txt successfully\n");

   // Close both files
   fclose(file1);
   fclose(file2);

   return 0;
}
//output: The program will not produce any output on the console unless an error occurs.//