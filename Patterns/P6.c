#include<stdio.h>
void pattern(int);
void pattern(int n)
{
    int i,j,l;
    printf("\nThe required pattern upto %d rows:\n",n);
    for(i=1;i<=n;i++)
    {
        for(l=1;l<=(n-i);l++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("%d ",i);
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
