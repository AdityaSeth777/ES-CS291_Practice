/*Write a C program using fseek() function.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 100
void main()
{
    FILE *f;
    char str[MAX_LEN];
    
    f = fopen("S.dat", "r");
    if (f == NULL)
    {
        printf("\n File does not exists.");
        exit(1);
    }
    fseek(f, 0, SEEK_SET);
    while (fgets(str, MAX_LEN, f))
    {
        printf("\n %s", str);
    }
    fclose(f);
}
