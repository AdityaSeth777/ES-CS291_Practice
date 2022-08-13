# include <stdio.h>
#include <stdlib.h>

int binary_Search(int *array_nums, int key, int low, int high)
{
    if (low >= high)
        return (key > array_nums[low]) ? (low + 1) : low;
    int mid = low + (high - 1) / 2;
    if (array_nums[mid] == key)
        return mid + 1;
    else if (array_nums[mid] > key)
        return binary_Search(array_nums, key, low, mid - 1);
    else
        return binary_Search(array_nums, key, mid + 1, high);
}
int* insertion_Sort(int *array_nums, int size)
{
    int i, j, key, index;
    for (i = 0; i < size; i++)
    {
        j = i - 1;
        key = array_nums[i];
        index = binary_Search(array_nums, key, 0, j);
        while (j >= index)
        {
            array_nums[j + 1] = array_nums[j];
            j = j - 1;
        }
        array_nums[j + 1] = key;
    }
    return array_nums;
}

int main()
{
    int array_nums[100], i, n=0;    
	printf("Input number of elements you want to sort: ");
    scanf("%d", &n);
    if ( n >= 1)
    {
	printf("\nInput the numbers: \n");    
    for (i = 0; i < n; i++) scanf(" %d", &array_nums[i]);
    int* result_arra = insertion_Sort(array_nums, n);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", result_arra[i]);
    }
    printf("\n");
    }
	return 0;
}

