#include <stdio.h>

void diamond(int);
void diamond(int n)
{
    int i,j,c;
    for(i=0;i<=(2*n-1);i++)
    {
    for(j=1;j<=abs(n-i);j++)
    printf("  ");
    c=(i<=n)?i:(c-1);
    for(j=1;j<=c;j++)
    printf("%d ",j);
    for(j=c-1;j>=1;j--)
    printf("%d ",j);
    printf("\n");
    }
}
void main()
{
    int N;
    printf("\nEnter the central number: ");
    scanf("%d",&N);
    diamond(N);
}
