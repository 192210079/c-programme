#include <stdio.h>

int main() {
    int i, j, n;
    char ch;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        ch -= 2;
        for (j = 1; j < i; j++) {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");

        for (j = 1; j <= i; j++) {
            printf("  ");
        }

        ch = 'A';
        for (j = 1; j <= n - i; j++) {
            printf("%c ", ch);
            ch++;
        }
        ch -= 2;
        for (j = 1; j < n - i; j++) {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}
//output:
Enter the number of rows: 4
A 
  A B C B A 
    A B C D C B A 
      A B C D E D C B A 
        A B C D C B A 
          A B C B A 
            A B A 
              A 
//            
