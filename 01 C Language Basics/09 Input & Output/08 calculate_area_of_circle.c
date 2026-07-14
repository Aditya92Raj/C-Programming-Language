//Write a program to input radius of circle from user and calculate area of cicle.
#include <stdio.h>
#define PI 3.14159
int main()
{
    float r,area;
    printf("Enter the radius of circle:");
    scanf("%f", &r);
    area=PI*r*r;
    printf("Area of circle=%f",area);
    return 0;
}
