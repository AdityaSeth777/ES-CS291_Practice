#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
int i, len, temp=0;
int flag = 0;
printf("Enter a string:");
scanf("%s", str);
len = strlen(str);
for(i=0;i < len ;i++)
{
if(str[i] != str[len-i-1])
{
temp = 1;
break;
}
}//end of for loop
if (temp==0) 
printf("String is a palindrome.\n");
else 
printf("String is not a palindrome.\n");
return 0;
}//end of main
