//Write a program to find volume of cuboid using function.
#include <stdio.h>
void volume()
{
    int l,b,h;
    printf("Enter a length, breadth and height:");
    scanf("%d%d%d",&l,&b,&h);
    printf("volume of cuboid=%d",l*b*h);
}
int main()
{
    volume();
    return 0;
}
