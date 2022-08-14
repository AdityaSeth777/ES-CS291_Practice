//to enter records in a file and sort them as per name-age
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
char name[50];
int marks,age;
}RECORD;//end of definition of structure RECORD
void input(RECORD *p)
{
    printf("Enter the name:  ");
    scanf(" %[^\n]s",p->name);
    printf("Enter the marks:  ");
    scanf(" %d",&p->marks);
    printf("Enter the age:  ");
    scanf(" %d",&p->age);
}//end of fn.
void sort(RECORD **p,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if((strcmpi(p[j]->name,p[j+1]->name)>0)||((strcmpi(p[j]->name,p[j+1]->name)==0&&(p[j]->age>p[j+1]->age))))
            {
                RECORD t=*p[j];
                *p[j]=*p[j+1];
                *p[j+1]=t;
            }//end of if block
        }//end of inner for loop
    }//end of outer for loop
}//end of fn.
void save_file(RECORD *p)
{
    FILE *fs=fopen("Testfile.dat","ab");
    fprintf(fs,"\n       Name: %s.        Marks: %d.      Age: %d.",p->name,p->marks,p->age);
    fclose(fs);
}//end of fn.
void display(RECORD *p)
{
printf("\n\t %d\t\t %d\t\t\t %s",p->age,p->marks,p->name);
}//end of fn.
void main()
{
    FILE*fs=fopen("Testfile.dat","wb");
    fprintf(fs,"%s","The sorted list:\n");
    fclose(fs);
    int i=0;
    char ans;
    RECORD **p=(RECORD**)malloc(sizeof(RECORD*));
    do{
        p=(RECORD**)realloc(p,(i+1)*sizeof(RECORD *));
        p[i]=(RECORD *)malloc(sizeof(RECORD));
        input(p[i]);
        i++;
        printf("Do you have more RECORDs? (Y/N):  ");
        scanf(" %c",&ans);
    }while(ans=='Y'||ans=='y');//end of do-while loop
    printf("\nThe unsorted RECORDs: \n");
    printf("\n\tAge\t\tMarks\t\t\tName");
    for(int n=0;n<i;n++)
        display(p[n]);
    sort(p,i);
    for(int n=0;n<i;n++)
        save_file(p[n]);
    fs=fopen("Testfile.dat","rb");
    char c;
    printf("\n");
    while((c=fgetc(fs))!=EOF)
        printf("%c",c);
    fclose(fs);
}//end of main