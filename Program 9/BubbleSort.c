// to perform sorting on an user-input array using Bubble-sort technique
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void input_elements(int *, int);
void display(int *, int);
void bubble_sort(int *, int);
void main()
{
    int *a, N;
    printf("\n Enter the number of elements: ");
    scanf("%d", &N);
    a = (int *)malloc(sizeof(int) * N);
    input_elements(a, N);
    printf("\n Elements before sorting: ");
    display(a, N);
    bubble_sort(a, N);
    printf("\n Elements after sorting: ");
    display(a, N);
    getchar();
    printf("\n");
}
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
void display(int *x, int n)
{
    int i;
    printf("\n");
    for (i = 0; i < n; i++)
        printf("\t %d", x[i]);
}
void bubble_sort(int *x, int n)
{
    int i, j, t, flag;
    for (i = 0, flag = 1; i < n - 1 && flag; i++)
        for (j = 0, flag = 0; j < n - i - 1; j++)
            if (x[j] > x[j + 1])
            {
                flag = 1;
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
}
