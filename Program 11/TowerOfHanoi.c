#include <stdio.h>
void initialization(int *);
void Tower_of_Hanoi(int *, int, char, char, char);
void initialization(int *step_count)
{
    *step_count = 0;
}
void Tower_of_Hanoi(int *step_count, int N, char Source, char Aux, char Target)
{
    if (N > 0)
    {
        Tower_of_Hanoi(step_count, (N - 1), Source, Target, Aux);
        printf("\nStep No. %d : Transfer Disk %d from %c to %c", ++(*step_count), N, Source, Target);
        Tower_of_Hanoi(step_count, (N - 1), Aux, Source, Target);
    }
}
void main()
{
    int n, step_no;
    printf("\nEnter the no. of disks: ");
    scanf("%d", &n);
    initialization(&step_no);
    Tower_of_Hanoi(&step_no, n, 'S', 'A', 'T');
    printf("\n");
}
