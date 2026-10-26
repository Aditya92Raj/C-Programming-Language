//Write a program to find circumference of circle using function.
#include <stdio.h>
void curcum()
{
    const float PI=3.14159;
    float r;
    printf("Enter a radius of circle:");
    scanf("%f",&r);
    printf("circumference of circle=%.2f",2*PI*r);
}
int main()
{
    curcum();
    return 0;
}
