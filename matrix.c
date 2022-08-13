#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct
{
  int n_r;
  int n_c;
  int a[MAX][MAX];
}MATRIX;

MATRIX input(MATRIX);
void disp(MATRIX);

void add(MATRIX,MATRIX);
void sub(MATRIX,MATRIX);
void multiply(MATRIX,MATRIX);
void transpose(MATRIX);

int main()
{
  int ch;
  MATRIX M1,M2;
  printf("Enter Matrix 1\n");
  M1=input(M1);
  printf("\nMatrix 1:");
  disp(M1);
  printf("Enter Matrix 2\n");
  M2=input(M2);
  printf("Matrix 2:\n");
  disp(M2);
  printf("MENU:\nEnter 1 to get transpose of the matrices.\nEnter 2 to perform addition.\nEnter 3 to perform subtraction.\nEnter 4 to get multiplication.");
  do
  {
    printf("\nEnter Choice: ");
   scanf("%d",&ch);
    switch(ch)
    {
       case 0:break;
       case 1:printf("Transpose of Matrix 1 :\n");
              transpose(M1);

              printf("\nTranspose of Matrix 2 :\n");
              transpose(M2);
              break;

       case 2:add(M1,M2);
              break;

       case 3:sub(M1,M2);
              break;

       case 4:multiply(M1,M2);
              break;
       default:printf("Wrong Choice !");
              
    }
  }while(ch!=0);
}


MATRIX input(MATRIX p)
{
  int i,j;
  printf("Enter the number of rows: \n");
  scanf("%d",&p.n_r);

  printf("Enter the number of columns: \n");
  scanf("%d",&p.n_c);
  for(i=0;i<p.n_r;i++)
{
    for(j=0;j<p.n_c;j++)
      {
        printf("Enter element [%d][%d]: \n",i+1,j+1);
        scanf("%d",&p.a[i][j]);
      }
}
  return p;
}


void disp(MATRIX p)
{
  int i,j;
  printf("\n");
  for(i=0;i<p.n_r;i++)
  {
    for(j=0;j<p.n_c;j++)
        printf("%d  ",p.a[i][j]);
    printf("\n");
  }
}


void add(MATRIX x,MATRIX y)
{
  MATRIX z;
  int i,j;
  if(x.n_r!=y.n_r || x.n_c!=y.n_c)
    printf("Matrix addition is not possible.\n");
  else
  {
    z.n_r=x.n_r;
    z.n_c=x.n_c;
    for(i=0;i<x.n_r;i++)
{
      for(j=0;j<x.n_c;j++)
         z.a[i][j]=x.a[i][j] + y.a[i][j];
}
   printf("Resultant Matrix:\n");
   disp(z);  
  }      
}


void multiply(MATRIX x,MATRIX y)
{
  MATRIX z;
  int i,j,k;
  if(x.n_c!=y.n_r)
    printf("Matrix multiplication is not possible.\n");
  
  else
   {
     z.n_r=x.n_r;
     z.n_c=y.n_c;
     for(i=0;i<z.n_r;i++)
{
       for(j=0;j<z.n_c;j++)
       {
          z.a[i][j]=0;
          for(k=0;k<x.n_c;k++)
            z.a[i][j]+=x.a[i][k]*y.a[k][j];
       }
}
    printf("Resultant Matrix:\n");
    disp(z);  
   }        
}    


void sub(MATRIX x,MATRIX y)
{
  MATRIX z;
  int i,j;
  if(x.n_r!=y.n_r || x.n_c!=y.n_c)
    printf("Matrix subtraction is not possible.\n");
  else
  {
    z.n_r=x.n_r;
    z.n_c=x.n_c;
    for(i=0;i<x.n_r;i++)
{
      for(j=0;j<x.n_c;j++)
         z.a[i][j]=x.a[i][j] - y.a[i][j];
}
   printf("Resultant Matrix:\n");
   disp(z);  
  }      
}


void transpose(MATRIX x)
{
  MATRIX z;
  int i,j;
  z.n_r=x.n_r;
  z.n_c=x.n_c;
  for(i=0;i<x.n_r;i++)
{
    for(j=0;j<x.n_c;j++)
    z.a[i][j]=x.a[j][i];
}
  printf("Resultant Matrix:\n");
  disp(z);    
}
