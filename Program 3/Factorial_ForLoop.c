//to calculate the factorial of user-input number using for loop
#include<stdio.h>
int main()
{
    int fact=1,num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        fact=fact*i;
    }//end of for loop
    printf("The calculated factorial is %d!=%d\n",num,fact);
    return 0;
}//end of main