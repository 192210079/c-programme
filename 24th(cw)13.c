main()
{
	int i=1,sum=0;
	clrscr();
printf(“Enter the values for n:”);
scanf(“%d”,n);
while(i<=n)
{
sum==sum+i;
i++;
}
printf(“The sum of n numbers is”,sum);
}
errors:
There are some syntax errors in the provided code. The line scanf("%d",n); should be scanf("%d",&n);, and the line sum==sum+i; should be sum=sum+i;. After correcting these
correct code:
#include <stdio.h>
#include <conio.h>

int main() {
    int i=1, n, sum=0;
    clrscr();
    printf("Enter the value for n: ");
    scanf("%d", &n);
    while (i <= n) {
        sum = sum + i;
        i++;
    }
    printf("The sum of %d numbers is %d", n, sum);
    return 0;
}
//output: Enter the value for n: 5
The sum of 5 numbers is 15//
