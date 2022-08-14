/*Write a C program to  read from a text file using fscanf().*/
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
    while (fscanf(f, "%s", str) != EOF)
    {
        printf("\n %s", str);
    }
    fclose(f);
}
