#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 1000
#define MAX_LENGTH 1000

int main() {
    char filename[100];
    char lines[MAX_LINES][MAX_LENGTH];
    int line_count = 0;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Failed to open file.\n");
        exit(1);
    }

    char buffer[MAX_LENGTH];

    while (fgets(buffer, MAX_LENGTH, file) != NULL) {
        if (line_count >= MAX_LINES) {
            printf("Error: too many lines in file.\n");
            exit(1);
        }

        // Remove the newline character from the end of the line
        int len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
        }

        strcpy(lines[line_count], buffer);
        line_count++;
    }

    fclose(file);

    printf("The file has %d lines:\n", line_count);

    for (int i = 0; i < line_count; i++) {
        printf("%s\n", lines[i]);
    }

    return 0;
}
//output: Input the file name to be opened: test.txt
The file has 5 lines:
This is the first line.
This is the second line.
This is the third line.
This is the fourth line.
This is the fifth line.//
