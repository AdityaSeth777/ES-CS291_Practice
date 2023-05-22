#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void input_elements(int *, int);
void display(int *, int);
void bubble_sort(int *, int);

int main()
{
    int *a, N;
    
    // Prompt the user to enter the number of elements
    printf("\n Enter the number of elements: ");
    scanf("%d", &N);
    
    // Dynamically allocate memory for the array based on the number of elements
    a = (int *)malloc(sizeof(int) * N);

    // Call the function to input the elements from the user
    input_elements(a, N);

    // Display the elements before sorting
    printf("\n Elements before sorting: ");
    display(a, N);

    // Perform bubble sort to sort the elements
    bubble_sort(a, N);

    // Display the elements after sorting
    printf("\n Elements after sorting: ");
    display(a, N);

    getchar();
    printf("\n");
    return 0;
}

// Function to input the elements from the user
void input_elements(int *x, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the Element[%d]: ", i + 1);
        fflush(stdin);
        scanf("%d", x + i);
    }
}

// Function to display the elements of the array
void display(int *x, int n)
{
    int i;
    printf("\n");
    for (i = 0; i < n; i++)
        printf("\t %d", x[i]);
}

// Function to perform bubble sort on the array
void bubble_sort(int *x, int n)
{
    int i, j, t, flag;
    
    // Iterate over the array elements
    for (i = 0, flag = 1; i < n - 1 && flag; i++)
    {
        flag = 0;
        
        // Compare adjacent elements and swap if necessary
        for (j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                flag = 1;
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
}
