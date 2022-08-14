//to accept and sort user-input records
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
typedef struct 
{
    char name[20];
    int age,marks;
}RECORD;
void sort_name_age(RECORD*,int);
void sort_name_age(RECORD* p,int n)
{
    int i,j,flag=1;
    RECORD t;
    for(i=0;i<n-1&&flag;i++)
    {
        for(j=0,flag=0;j<(n-i-1);j++)
        if(strcmpi(p[j].name,p[j+1].name)>0||(strcmpi(p[j].name,p[j+1].name)==0&&p[j].age>p[j+1].age))
        {
            flag=1;
            t=p[j];
            p[j]=p[j+1];
            p[j+1]=t;
        }//end of if block
    }//end of for loop
}//end of fn.
void main()
{
    int i,n; 
    RECORD* arr;
    printf("\nEnter the number of records: ");
    scanf("%d",&n);
    arr=(RECORD*)malloc(n*sizeof(RECORD));
    for(i=0;i<n;i++)
    {
    printf("Enter the name:  ");
    fflush(stdin);
    scanf("%[^\n]s",arr[i].name);
    printf("Enter the marks:  ");
    scanf(" %d",&arr[i].marks);
    printf("Enter the age:  ");
    scanf(" %d",&arr[i].age);
    }//end of for loop
    printf("\nRecords before sorting: ");
    for(i=0;i<n;i++)
    printf("\nNAME: %s\nAGE: %d\nMARKS: %d\n",arr[i].name,arr[i].age,arr[i].marks);
    sort_name_age(arr,n);
    printf("\nRecords after sorting: ");
    for(i=0;i<n;i++)
    printf("\nNAME: %s\nAGE: %d\nMARKS: %d\n",arr[i].name,arr[i].age,arr[i].marks);
}//end of main