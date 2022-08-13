#include <stdio.h>
int main ()
{
int num,r,sum,temp;
int st,en;
int counter=0;
printf("Starting Number of Range: ");
scanf("%d", &st);
printf("Ending Number of Range: ");
scanf("%d", &en);

for (num=st; num<=en; num++)
{
temp=num;
sum=0;
while (temp!=0)
{
r=temp%10;
temp=temp/10;
sum=sum+(r*r*r);
}
if (sum==num){
printf("Armstrong Numbers in given range are: %d\n",sum);
counter=counter+1;
}
}
if (counter==0)
{
printf("There are no Armstrong numbers in this range.");
}
printf ("\n");
return 0;
}
