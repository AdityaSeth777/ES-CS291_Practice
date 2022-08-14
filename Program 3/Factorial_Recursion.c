// to calculate the factorial of user-input number using recursion
#include <stdio.h>
int factorial(int x);
int factorial(int x)
{
    if (x == 1 || x == 0)
        return 1;
    else
        return (factorial(x - 1) * x);
} // end of fn.
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Required factorial:\n%d!=%d\n", num, factorial(num));
    return 0;
} // end of main
