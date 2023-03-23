#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, frequency = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Input the character to find the frequency: ");
    scanf("%c", &ch);

    // Count the frequency of the character
    for (i = 0; str[i] != '\0'; i++) {
        if (ch == str[i]) {
            frequency++;
        }
    }

    printf("Frequency of %c = %d", ch, frequency);

    return 0;
}
