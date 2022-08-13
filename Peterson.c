#include <stdio.h>
 
int main()
{
  int num, temp, rem, sum = 0, fact = 1;
  int i;
 
  printf("Enter a number: ");
  scanf("%d", &num);
 
  temp = num;
  while (temp != 0)
  {
    rem = temp % 10;
    for (i = 1; i <= rem; i++)
      fact *= i;
 
    sum += fact;
    fact = 1;
    temp /= 10;
  }
  
  //display
  if (num == sum)
    printf("%d is a Peterson Number.\n", num);
  else
    printf("%d is not a Peterson Number.\n", num);
 
  return 0;
}
