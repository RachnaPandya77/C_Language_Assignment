// Write a C Program to Print the Multiplication Table of N

#include <stdio.h>

void main()
{
    int num, i;

    printf("Enter number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}
