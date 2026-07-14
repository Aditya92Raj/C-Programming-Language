//Write a program to input radius & calculate volume of sphere.
#include <stdio.h>
#define PI 3.14159
int main() {
    float r,volume;
    printf("Enter a radius of sphere:");
    scanf("%f",&r);
    volume=(4*PI*r*r*r)/3;
    printf("volume of sphere=%f",volume);
    return 0;
}
