void main()
{
	char str1[30],str2[30];
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	get(str2);
	if(strcmp(str1,str2)=0)
	{
		print("Both strings are equal");
	else
		printf("Strings are unequal");
	}
}
 
errors:

The main() function should always return an integer value, usually 0 to indicate successful execution of the program. So the return type of main() should be int, not void.

The gets() function used to read the input string for str2 has been deprecated and is no longer recommended to use due to security vulnerabilities. Instead, you can use fgets() function to read input.

The get() function used to read the input string for str2 is not a standard function in C. It should be gets() or fgets().

The print() function used to print the message when both strings are equal is not a standard C function. The correct function name is printf().

There is a missing closing brace } for the if statement.

correct code:

#include <stdio.h>
#include <string.h>

int main() {
    char str1[30], str2[30];
    printf("Enter first string: ");
    fgets(str1, 30, stdin);
    printf("Enter second string: ");
    fgets(str2, 30, stdin);
    if (strcmp(str1, str2) == 0) {
        printf("Both strings are equal");
    } else {
        printf("Strings are unequal");
    }
    return 0;
}

//output:
Enter first string: Hello
Enter second string: World
Strings are unequal

if the user entered the same string for both inputs, the output would be:

output:
Enter first string: Hello
Enter second string: Hello
Both strings are equal//


