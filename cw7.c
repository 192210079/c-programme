#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int length;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the length of the string to copy: ");
    scanf("%d", &length);

    // Copy the first 'length' characters of str1 to str2
    strncpy(str2, str1, length);

    // Add null terminator to str2
    str2[length] = '\0';

    printf("Copied string: %s", str2);

    return 0;
}
