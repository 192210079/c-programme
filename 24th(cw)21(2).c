void main()
{
charstr[50];
inti,length = 0;
clrscr();
printf("\nEnter the String: ");
get(str);
for(i=0; str[i]!='\0'; i++)
{
length++;
}
printf("\nThe length of the string is %c.",count);
getche();
}
 
errors :

The variable i used in the loop to count the length of the string has not been declared.

The variable used to store the length of the string has been named count instead of length, which is what you have used in the printf statement.

The get function call used to read the string is incorrect. It should be gets(str) instead.

The main function should have a return type of int, not void.

The getche() function call at the end of the program is unnecessary, as it only waits for a single character input from the user before exiting.

correct code:
#include <stdio.h>
#include <conio.h>

int main()
{
    char str[50];
    int i, length = 0;

    clrscr();
    printf("\nEnter the String: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("\nThe length of the string is %d.", length);

    return 0;
}

//output:
Enter the String: Hello World!
The length of the string is 12.//

