// to display the Inverted Pascal's triangle upto user-input number of rows
#include<stdio.h>
#define MAX 5
void InvertedPascalTriangle(int);
void InvertedPascalTriangle(int N)
{
    int C[MAX][MAX],k,n,r;
    for(n=0;n<=(N-1);n++)
    {
    for(r=0;r<=n;r++)
    C[n][r]=(r==0||r==n)?1:(C[n-1][r-1]+C[n-1][r]);
    }
    for(n=N-1;n>=0;n--)
    {
        printf("\n");
        for(k=1;k<=(N-n-1);k++)
        printf(" ");
        for(r=0;r<=n;r++)
        printf("%2d",C[n][r]);
    }
}
void main()
{
    int N;
    printf("\nEnter the number of rows: ");
    scanf("%d",&N);
    InvertedPascalTriangle(N);
    printf("\n");
}
