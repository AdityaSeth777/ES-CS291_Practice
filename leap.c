//to check if user-input year is a leap year or not
#include <stdio.h>
void main()
{
    int y;
    printf("\nEnter the year:");
    scanf("%d",&y);
    if((y%100==0&&y%400==0)||(y%100!=0&&y%4==0))
    printf("The year %d is a leap year.\n",y);
    else
    printf("The year %d is not a leap year.\n",y);
}
