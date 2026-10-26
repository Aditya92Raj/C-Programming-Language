//Write a program to find area of rectangle using function.
#include <stdio.h>
void area()
{
    int l,b;
    printf("Enter a length and breadth:");
    scanf("%d%d",&l,&b);
    printf("Area of rectangle=%d",l*b);
}
int main()
{
    area();
    return 0;
}
