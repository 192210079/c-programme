#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, n;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    n = strlen(str);

    // Bubble sort the string
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j+1]) {
                // Swap the characters
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    printf("Sorted string: %s", str);

    return 0;
}
