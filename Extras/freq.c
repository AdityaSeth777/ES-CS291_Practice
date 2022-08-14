#include <stdio.h>
int main() 
{
	char str[1000], ch;
	int count = 0,i;
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	printf("Enter a character to find its frequency: ");
	scanf("%c", &ch);
	for (i = 0; str[i] != '\0'; ++i) 
	{
	if (ch == str[i])
	++count;
	}//end of for loop
	printf("Frequency of %c = %d\n", ch, count);
	return 0;
}//end of main
