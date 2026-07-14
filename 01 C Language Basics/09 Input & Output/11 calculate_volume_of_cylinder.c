//Write a program to input radius and height & calculate volume of cylinder.
#include <stdio.h>
#define PI 3.14159
int main() {
    float r,h,volume;
    printf("Enter a radius of cylinder:");
    scanf("%f",&r);
    printf("Enter a height of cylinder:");
    scanf("%f",&h);
    volume=PI*r*r*h;
    printf("volume of cylinder=%f",volume);
    return 0;
}
