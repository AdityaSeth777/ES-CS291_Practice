//to search for a particular record in a file
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct
{
    char name[50];
    int marks,age;
}record;//end of definition of structure record
void main()
{
    record p;
    FILE* fs=fopen("Record.dat","rb");
    char findname[50];
    int found=0;
    printf("Enter the name to search: ");
    scanf(" %[^\n]s",&findname);
     while(fread(&p,sizeof(record),1,fs))
        {
            if(strcmpi(p.name,findname)==0)
            {
                found=1;
             printf("Record found\n");
             printf("\nName: %s Age: %d Marks: %d",p.name,p.age,p.marks);
            }//end of if block
        }//end of while loop
    if(found==0)
                printf("Not found");
    fclose(fs);
}//end of main