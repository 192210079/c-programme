#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

char *addBinary(char *a, char *b);

int main() {
    char s1[MAX_LENGTH], s2[MAX_LENGTH];
    printf("Enter the first binary number: ");
    scanf("%s", s1);
    printf("Enter the second binary number: ");
    scanf("%s", s2);

    char *result = addBinary(s1, s2);
    printf("Result: %s\n", result);

    return 0;
}

char *addBinary(char *a, char *b) {
    char *result = (char *)malloc(sizeof(char) * (MAX_LENGTH + 1));
    memset(result, '0', MAX_LENGTH);
    result[MAX_LENGTH] = '\0';

    int carry = 0, sum = 0;
    int i = strlen(a) - 1, j = strlen(b) - 1, k = MAX_LENGTH - 1;

    while (i >= 0 || j >= 0 || carry) {
        sum = carry;

        if (i >= 0) {
            sum += (a[i] - '0');
            i--;
        }

        if (j >= 0) {
            sum += (b[j] - '0');
            j--;
        }

        result[k] = (sum % 2) + '0';
        carry = sum / 2;
        k--;
    }

    return result + k + 1;
}
//output: Enter the first binary number: “1101”
Enter the second binary number: “100101”
Result: 10011001101100111010//

