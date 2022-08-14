//to print the diamond pattern in Q.10 in a different method
#include<stdio.h>
#include<math.h>
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
    }//end of outer for loop
}//end of fn.
void main()
{
    int N;
    printf("\nEnter the central number:");
    scanf("%d",&N);
    diamond(N);
}//end of main