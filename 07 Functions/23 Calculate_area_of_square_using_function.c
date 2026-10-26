//Write a program to find area of square using function.
#include <stdio.h>
void area()
{
    int s;
    printf("Enter a side of square:");
    scanf("%d",&s);
    printf("Area of square=%d",s*s);
}
int main()
{
    area();
    return 0;
}
