#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int *arr;
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&size);
    int temp=0;
    arr=(int*)calloc(size,sizeof(int));

    if(arr==NULL)
    {
        printf("Space could not be allocated.\n");
        return 1;
    }
    while(temp<size)
    {
        printf("arr[%d]= \t ",temp);
        scanf("%d",&arr[temp]);
        printf("\n");
        temp++;
    }
    printf("\n");
 
    printf("Before Sorting: \n");
    temp=0;
    while(temp<size)
    {
        printf("arr[%d]=%d\n",temp,arr[temp]);
        temp++;
    }
    printf("\n");
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
 
        if(min!=i)
        {
            int smallest=arr[min];
            arr[min]=arr[i];
            arr[i]=smallest;
        }
    }
    printf("After Sorting: \n");
    temp=0;
    while(temp<size)
    {
        printf("arr[%d]=%d\n",temp,arr[temp]);
        temp++;
    }
    free(arr);
    return 0;
}
