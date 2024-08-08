#include <stdio.h>

void main()
{
    int n, n1, max;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        n1 = n % 10;
        if (n1 > max)
        {
            max = n1;
        }
        n /= 10;
    }

    printf("The maximum digit is: %d\n", max);
}
