//to find the numbers from 1-10000 which have an equal sum of even and odd digits
#include<stdio.h>
int sum_check(int);
int sum_check(int n)
{
    int even_sum=0,odd_sum=0;
    while(n>0)
    {
        ((n%10)%2==0)?(even_sum+=(n%10)):(odd_sum+=(n%10));
        n/=10;
    }//end of while loop
    return(even_sum==odd_sum);
}//end of fn.
void main()
{
    int i;
    printf("The numbers from 1-10000 that have an equal sum of even and odd digits are:\n");
    for(i=1;i<=10000;i++)
    if(sum_check(i))
    printf("%d ",i);
}//end of main