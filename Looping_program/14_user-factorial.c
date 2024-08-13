// Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

void main()
{
    int num, i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (num < 0)
        {
            printf("Error: Factorial of a negative number is undefined.\n");
        }
        else
        {
            long long fact = factorial(num);
            printf("Factorial of %d = %lld\n", num, fact);
        }
    }
}
