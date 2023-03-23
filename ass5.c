main()
{
int c[ ]={2.8,3.4,4,6.7,5};
int j,*p=c,*q=c;
for(j=0;j<5;j++) {
printf(" %d ",*c);
++q; }
for(j=0;j<5;j++){
printf(" %d ",*p);
++p; }
}
errors :

The array c is initialized with floating-point values, which are implicitly converted to integers. This can result in loss of precision, since the fractional part of the values is truncated.

The first loop attempts to print the values of the array using the pointer q, but the loop variable j is not used to index the array. Instead, the pointer c is used directly to print the values, which results in printing the same value multiple times.

The second loop attempts to print the values of the array using the pointer p, which is initialized with the value of c, but the loop variable j is not used to limit the number of iterations. Therefore, the loop will continue until it accesses memory outside the bounds of the array, resulting in undefined behavior.

correct code:
#include <stdio.h>

int main() {
    int c[] = {2, 3, 4, 6, 5};
    int j, *p = c, *q = c;
    for(j = 0; j < 5; j++) {
        printf("%d ", *q);
        ++q;
    }
    printf("\n");
    for(j = 0; j < 5; j++) {
        printf("%d ", *p);
        ++p;
    }
    return 0;
}
//output : 2 3 4 6 5
2 3 4 6 5
//
