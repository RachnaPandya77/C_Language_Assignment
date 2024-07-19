#include<stdio.h>

void main(){

    printf("WAP to Find Area And Circumference of Circle\n");
    int radius, area, circumference;

    printf("Enter the radius of circle: ");
    scanf("%d",&radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14* radius;

    printf("Area of circle: %d\n", area);
    printf("Circumference of circle: %d\n", circumference);
}