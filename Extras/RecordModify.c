//to modify records in a file
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct
{
    char name[50];
    int marks,age;
}record;//end of definition of structure record
void input(record*p)
{
    printf("\nEnter the name: ");
    scanf(" %[^\n]s",p->name);
    printf("Enter the Marks: ");
    scanf(" %d",&p->marks);
    printf("Enter the age: ");
    scanf(" %d",&p->age);
}//end of fn.
void main()
{
    record p;
    FILE* fs=fopen("Record.dat","rb+");
    char findname[50];
    int found=0,age1;
    printf("\nEnter the name to modify: ");
    scanf(" %[^\n]s",&findname);
    printf("Enter the age:");
    scanf("%d",&age1);
     while(fread(&p,sizeof(record),1,fs))
        {
            if(strcmpi(p.name,findname)==0&&p.age==age1)
            {
                found=1;
             printf("Record found\n");
             printf("\nName: %s Age: %d Marks: %d",p.name,p.age,p.marks);
                fseek(fs,-sizeof(record),SEEK_CUR);
                record r;
                printf("\nEnter the name: ");
                scanf(" %[^\n]s",r.name);
                printf("Enter the Marks: ");
                scanf(" %d",&r.marks);
                printf("Enter the age: ");
                scanf(" %d",&r.age);

                fwrite(&r,sizeof(record),1,fs);
                break;
            }//end of if block
        }//end of while loop
    if(found==0)
                printf("Not found");
    fclose(fs);
}//end of main