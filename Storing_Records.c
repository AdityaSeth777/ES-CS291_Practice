#include <stdio.h>
#define marks(a) (a>100 || a<0)?1:0
typedef struct student
{
	char cd[3][50];
	char crs[50];
	int uid;
	char name[50];
	float s[3];
	float avg;
}A;
A accept(A);
void display(A);
int main()
{
	int n,ch,i,z;
	
	printf("Enter the number of students: ");
	scanf("%d",&n);
	A s[n];
	
	for(i=0;i<n;i++)
	{
		s[i]=accept(s[i]);
	}
	for(i=0;i<n;i++)
		display(s[i]);
		return 0;
}
A accept(A y)
{
	int i,j=0;
	printf("\nEnter Course : ");
	scanf("%s",&y.crs);
	
	printf("Enter Name : ");
	scanf("%s",&y.name);
	
	printf("Enter Roll no. : ");
	scanf("%d",&y.uid);
	
	for(i=0;i<3;)
	{
		

		printf("Enter marks in Subject %d: ",i+1);
		scanf("%f",&y.s[i]);
		
		if(marks(y.s[i])==1)
		{
			printf("Invalid Marks ! Please re-enter.\n");
		}
		else
		{
			printf("Enter Code for Subject %d : ",i+1);
			scanf("%s",&y.cd[i]);
			j+=y.s[i];
			i++;
		}
	}
	y.avg=j/3;
	return y;
}

void display(A x)
{
	int i;
	printf("\nRoll No : %d\nName : %s",x.uid,x.name);
	printf("\nCourse : %s",x.crs);
	for(i=0;i<3;i++)
		printf("\nSubject : %s   Marks:%f",x.cd[i],x.s[i]);
	printf("\nAverage Marks : %f\n",x.avg);
}
