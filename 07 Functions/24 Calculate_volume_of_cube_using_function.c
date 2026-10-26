//Write a program to find volume of cube using function.
#include <stdio.h>
void volume()
{
    int s;
    printf("Enter a side of cube:");
    scanf("%d",&s);
    printf("volume of cube=%d",s*s*s);
}
int main()
{
    volume();
    return 0;
}
