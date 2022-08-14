#include<stdio.h>
#include<conio.h>
int SequentialSearch(int*,int,int);
void main()
{
    int arr[]={2,9,4,8,5,40,35,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
    int result=SequentialSearch(arr,n,x);
    if(result==-1)
    printf("\nElement is not present in array");
    else
    printf("\n Element %d is present at %d position",x,result);
}//end of main
int SequentialSearch(int*p,int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    if(key==p[i])
    return(i);
    return(-1);
}//end of fn.