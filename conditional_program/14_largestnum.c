#include<stdio.h>

void main(){
    printf("WAP to find the largest of three numbers\n");

    int a, b, c, max;

    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);

    max = (a>b) ? (a>c ? a:c) : (b>c ? b:c);

    printf("The maximum number is: %d\n", max);


}
