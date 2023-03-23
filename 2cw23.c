The logic missing statements in the code are:

The variable 'd' is not initialized before using it in the while loop.
The value of 'd' is not calculated inside

#include <stdio.h>
#include <conio.h>

int main()
{
int i, n, d, sum;
clrscr();
printf("Armstrong numbers : ");
for(i=2; i<=1000; i++)
{
    sum = 0; 
    n = i; 
    while(n)
    {
        d = n % 10;
        sum = sum + (d * d * d); 
        n = n / 10;
    }
    if (sum == i) 
        printf("%d ", i);
}
getch();
return 0;

}
//output 
The final output will display all the Armstrong numbers between 2 and 1000.//