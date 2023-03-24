void main()
{
int a[20][20],c[20][20],i,j,r1,c1;
clrscr();
printf("\n Enter the number of rows and column of a matrix: \n");
scanf("%d",&r1,&c1);
printf("Enter the elements of matrix :");
for(i=0;i<r1;i++)
{
for(j=0;j<r1;j++)
scanf("%d",&a[i][j]);
}
printf("The elements of matrix are :");

for(i=0;i<r1;i++)
{
           Printf {“\n”);
for(j=0;j<c1;j++)
printf("\t%d",&a[i][j]);
}
printf("\n Transpose Matrix is\n");
for(i=0;i<r1;i++)
{
printf("\n");
for(j=0;j<c2;j++)
{
c[i][j]=a[j][i]; /* inverse rows and column */
printf("%d\t",c[i][j]);
}
}
getch();
}

errors:

The scanf function call to read in the number of rows and columns should have two arguments, one for the format string and another for the address of the variable that will store the input. So, it should be scanf("%d%d", &r1, &c1);.

In the first for loop where you are reading in the elements of the matrix, you have used r1 instead of c1 for the inner loop condition. It should be for(j=0;j<c1;j++).

In the second for loop where you are printing the matrix elements, you have used an incorrect format specifier for printing integers. It should be printf("\t%d", a[i][j]); instead of printf("\t%d", &a[i][j]);.

In the third for loop where you are calculating and printing the transpose of the matrix, you have used an undeclared variable c2. It should be c1 instea

correct code:
#include <stdio.h>
#include <conio.h>

void main()
{
    int a[20][20], c[20][20], i, j, r1, c1;

    clrscr();
    printf("\n Enter the number of rows and column of a matrix: \n");
    scanf("%d%d", &r1, &c1);

    printf("Enter the elements of matrix: ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    }

    printf("The elements of matrix are:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            printf("\t%d", a[i][j]);
        printf("\n");
    }

    printf("\n Transpose Matrix is:\n");
    for (i = 0; i < c1; i++)
    {
        printf("\n");
        for (j = 0; j < r1; j++)
        {
            c[i][j] = a[j][i]; /* inverse rows and column */
            printf("%d\t", c[i][j]);
        }
    }
    getch();
}
//output:
Enter the number of rows and column of a matrix:
3 4
Enter the elements of matrix: 1 2 3 4 5 6 7 8 9 10 11 12
The elements of matrix are:
        1       2       3       4
        5       6       7       8
        9       10      11      12

 Transpose Matrix is:
1       5       9
2       6       10
3       7       11
4       8       12//

