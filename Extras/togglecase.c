//to toggle case of user-input string
#include<stdio.h>
#include<string.h>
void toggle(char*);
void main()
{
    int i;
    char s[100];
    printf("\nEnter the string:");
    gets(s);
    toggle(s);
}//end of main
void toggle(char *string)
{
    int i;
    for(i=0;i<strlen(string);i++)
    if(*(string+i)<=90&&*(string+i)>=65)
    *(string+i)+=32;
    else if(*(string+i)>=97&&*(string+i)<=122)
    *(string+i)-=32;
    string[i+1]='\0';
    printf("\nThe required string(case toggled):");
    puts(string);
}//end of fn.