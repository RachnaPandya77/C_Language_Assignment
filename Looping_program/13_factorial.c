#include <stdio.h>

void main()
{
    int num, i = 1, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("negative number - not valid");
    }
    else
    {
        while (i <= num)
        {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }
}
