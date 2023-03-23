void main()
{
int const * p=5;
printf("%d",++(*p));
}
errors: 
The pointer p is declared as a pointer to a constant integer using the const keyword. Therefore, the value pointed to by p cannot be modified directly using the ++ operator.

The value assigned to p is an integer literal 5, which is not a valid memory address. This results in undefined behavior.

The main function does not return a value, which is a violation of the C standard.
correct code:
#include <stdio.h>

int main() {
    int x = 5;
    int const *p = &x;
    printf("%d", ++(*p));
    return 0;
}
//output: 6//