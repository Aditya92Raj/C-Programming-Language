//Write a program to input length,breadth and height of cuboid from user and calculate volume of cuboid.
#include <stdio.h>
int main() {
    int l,b,h;
    printf("Enter a length of cuboid:");
    scanf("%d",&l);
    printf("Enter a breadth of cuboid:");
    scanf("%d",&b);
    printf("Enter a height of cuboid:");
    scanf("%d",&h);
    printf("Volume of cuboid=%d",l*b*h);
    return 0;
}
