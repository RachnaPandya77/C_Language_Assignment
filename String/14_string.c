// Write a program in C to combine two strings manually

#include <stdio.h>

int main()
{
    char str1[100], str2[100], combined_str[200];
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // combined string
    for (i = 0; str1[i] != '\0'; i++)
    {
        combined_str[i] = str1[i];
    }

    // Copy second string
    for (j = 0; str2[j] != '\0'; j++)
    {
        combined_str[i + j] = str2[j];
    }

    combined_str[i + j] = '\0';

    printf("Combined string: %s\n", combined_str);

    return 0;
}