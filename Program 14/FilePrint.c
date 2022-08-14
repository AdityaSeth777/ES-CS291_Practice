/*Write to a text file using fprintf().*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 100
void main()
{
    FILE *f;
    char str[MAX_LEN];
    
    f = fopen("S.dat", "w");
    if (f == NULL)
    {
        printf("\n File does not exists.");
        exit(1);
    }
    printf("\n Enter the name:");
    fflush(stdin);
    scanf("%[^\n]",str);
    fprintf(f, "%s", str);
    fclose(f);
}
