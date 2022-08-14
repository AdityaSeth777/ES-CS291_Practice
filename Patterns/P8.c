#include <stdio.h>
void pattern(int);
void pattern(int n)
{
    int l=1,i,j,k;
    printf("\nThe required pattern upto %d rows:\n",n);
    for(i=1;i<=(n/2+1);i++)
    {
        for(j=1;j<=(n/2+1-i);j++)
        printf(" ");
        for(k=1;k<=l;k++)
        printf("*");
        printf("\n");
        l+=2;
    }
    l=n-2;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
        for(k=l;k>=1;k--)
        printf("*");
        printf("\n");
        l-=2;
    }
}
void main()
{
    int rows;
    printf("\nEnter the number of rows: ");
    scanf("%d",&rows);
    pattern(rows);
}
