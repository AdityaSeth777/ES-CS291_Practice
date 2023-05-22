#include <stdio.h>

void merge(int [], int, int, int);
void mergeSort(int [], int, int);
 
int main()
{
    int list[50];
    int i, size;
 
    printf("Enter the total number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
    mergeSort(list, 0, size - 1);
    printf("After merge sort:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d   ", list[i]);
    }
 
   return 0;
}

void merge(int list[], int low, int mid, int high)
{
    int leftSize = mid - low + 1;
    int rightSize = high - mid;

    int leftArray[leftSize], rightArray[rightSize];

    for (int i = 0; i < leftSize; i++)
        leftArray[i] = list[low + i];
    
    for (int j = 0; j < rightSize; j++)
        rightArray[j] = list[mid + 1 + j];

    int i = 0, j = 0, k = low;

    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] <= rightArray[j])
        {
            list[k] = leftArray[i];
            i++;
        }
        else
        {
            list[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        list[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        list[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int list[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        mergeSort(list, low, mid);
        mergeSort(list, mid + 1, high);

        merge(list, low, mid, high);
    }
}
