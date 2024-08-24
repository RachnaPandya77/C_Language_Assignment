// WAP to print factorial of given number

#include <stdio.h>

void main()
{
    int num, factorial = 1; // initialize factorial with 1 //updated

    printf("Enter number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i) // pre_inc
    {
        factorial *= i;
    }
    printf("Factorial of %d = %d\n", num, factorial);
}
