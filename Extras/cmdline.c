//to copy contents of one file to another using command line arguments
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main(int argc,char *argv[])
{
    FILE *source,*target;
    char c;
    if(argc!=3)
    {
        printf("enter the correct number of arguments");
        exit(0);
    }//end of if block
    source=fopen(argv[1],"rb");
    if(source==NULL)
    {
        printf("file not found");
        exit(0);
    }//end of if block
    target=fopen(argv[2],"wb");
    if(target==NULL)
    {
        printf("file not found");
        exit(0);
    }//end of if block
    while((c=fgetc(source))!=EOF)
        fputc(c,target);
    fclose(source);
    fclose(target);
}//end of main