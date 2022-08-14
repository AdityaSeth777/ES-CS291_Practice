#include <stdio.h>
void pattern(int);
void pattern(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i;j++)
	printf("%d ",j);
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
