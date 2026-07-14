//Write a program to input radius & calculate circumference of circle.
#include <stdio.h>
#define PI 3.14159
int main() {
    float r,circumference;
    printf("Enter a radius of circle:");
    scanf("%f",&r);
    circumference=2*PI*r;
    printf("circumference of circle=%f",circumference);
    return 0;
}
