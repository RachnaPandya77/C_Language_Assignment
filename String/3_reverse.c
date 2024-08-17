// Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}