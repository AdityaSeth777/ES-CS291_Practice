#include <stdio.h>
void pattern(int);
void pattern(int n)
{
    int i,j;
    printf("\nThe required pattern upto %d rows:\n",n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        (i%2==0)?((j%2==0)?(printf("1 ")):(printf("0 "))):((j%2==0)?(printf("0 ")):(printf("1 ")));
        printf("\n");
    }
}
void main()
{
    int rows;
    printf("\nEnter the number of rows: ");
    scanf("%d",&rows);
    pattern(rows);
}
