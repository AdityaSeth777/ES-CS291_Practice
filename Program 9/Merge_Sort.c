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

// Function to merge two sorted subarrays
void merge(int list[], int low, int mid, int high)
{
    int leftSize = mid - low + 1;       // Size of the left subarray
    int rightSize = high - mid;         // Size of the right subarray

    int leftArray[leftSize], rightArray[rightSize];   // Temporary arrays to hold the subarrays

    // Copy elements from list to leftArray
    for (int i = 0; i < leftSize; i++)
    {
        leftArray[i] = list[low + i];
    }

    // Copy elements from list to rightArray
    for (int j = 0; j < rightSize; j++)
    {
        rightArray[j] = list[mid + 1 + j];
    }

    int i = 0;     // Index for leftArray
    int j = 0;     // Index for rightArray
    int k = low;   // Index for merged list

    // Merge the two sorted subarrays into list in ascending order
    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] <= rightArray[j])
        {
            list[k] = leftArray[i];    // Place the smaller element from leftArray into list
            i++;
        }
        else
        {
            list[k] = rightArray[j];   // Place the smaller element from rightArray into list
            j++;
        }
        k++;
    }

    // Copy any remaining elements from leftArray to list
    while (i < leftSize)
    {
        list[k] = leftArray[i];
        i++;
        k++;
    }

    // Copy any remaining elements from rightArray to list
    while (j < rightSize)
    {
        list[k] = rightArray[j];
        j++;
        k++;
    }
}

// Function to perform merge sort
void mergeSort(int list[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;   // Calculate the middle index

        mergeSort(list, low, mid);          // Recursively sort the left subarray
        mergeSort(list, mid + 1, high);     // Recursively sort the right subarray

        merge(list, low, mid, high);        // Merge the two sorted subarrays
    }
}
