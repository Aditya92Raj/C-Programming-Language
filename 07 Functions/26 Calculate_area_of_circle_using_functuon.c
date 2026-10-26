//Write a program to find area of circle using function.
#include <stdio.h>
void area()
{
    const float PI=3.14159;
    float r;
    printf("Enter a radius of circle:");
    scanf("%f",&r);
    printf("Area of circle=%.2f",PI*r*r);
}
int main()
{
    area();
    return 0;
}
