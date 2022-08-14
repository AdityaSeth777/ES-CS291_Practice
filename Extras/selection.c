#include <stdio.h>
void swap(int *xp, int *yp)
{
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp;
}
void selection(int *arr, int n)
{ 
int i, j, min_idx; 
for(i = 0; i < n-1; i++)
{ 
	min_idx = i;
	for(j = i+1; j < n; j++) 
	if(arr[j] < arr[min_idx]) 
	min_idx = j;
	swap (&arr[min_idx], &arr[i]); // swap(arr+min_idx,arr+i); 
}
} 
void printArray(int *arr, int size) 
{ 
	int i;
	for(i=0; i < size; i++) 
	printf("%d ", arr[i]);
	printf("\n");
}
int main() 
{ 
	int arr[] = {98, 26, 7, 0, 11}; 
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Unsorted array: \n");
	printArray(arr, n); 
	selection(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n); 
	return 0; 
} 
