//to display the Pascal's triangle upto user-input number of rows using 2-D array
#include<stdio.h>
#define MAX 5
void PascalTriangle(int);
void PascalTriangle(int N)
{
    int C[MAX][MAX],k,n,r;
    for(n=0;n<=(N-1);n++)
    {
        printf("\n");
        for(k=1;k<=(N-n-1);k++)
        printf(" ");
        for(r=0;r<=n;r++)
        {
            C[n][r]=(r==0||r==n)?1:(C[n-1][r-1]+C[n-1][r]);
            printf("%2d",C[n][r]);
        }//end of inner for loop
    }//end of outer for loop
    printf("\n");
}//end of fn.
void main()
{
    int N;
    printf("\nEnter the number of rows:");
    scanf("%d",&N);
    PascalTriangle(N);
}//end of main