//to calculate simple and compound interest using user-input data
#include <stdio.h>
#include <math.h>
void Interest(float, float, float);
void Interest(float p, float r, float t)
{
	float s,c;
	s=(p*r*t)/100;
	c=(p*(pow(1+(r/100),t))-p);
	printf("\nRequired value of simple interest is Rs. %2lf",s);
	printf("\nRequired value of compound interest is Rs. %2lf\n",c);
}
void main()
{
	float p,r,t;
	printf("\nEnter the principal amount(in Rs.): ");
	scanf("%f",&p);
	printf("\nEnter the rate(in percentage per annum): ");
	scanf("%f",&r);
	printf("\nEnter the time period(in years): ");
	scanf("%f",&t);
	Interest(p,r,t);
}
