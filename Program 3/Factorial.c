//to find the factorial of a user-input number
#include<stdio.h>
int fact(int);
int fact(int num)
{
	int fact=1;
	if(num==0)
	return(1);
	while(num>0)
	{
	fact*=(num%10);
	num--;
	}
	return(fact);
}
void main()
{
	int n;
	printf("\nEnter the number: ");
	scanf("%d",&n);
	printf("\nRequired factorial: %d! = %d\n",n,fact(n));
}
