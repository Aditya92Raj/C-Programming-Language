// Write a program to input two number from user and find the greater of two numbers.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("%d is Greater.",a);
    }
    else if (b>a)
    {
        printf("%d is Greater.",b);
    }
    else
    {
        printf("Both numbers are Equal.");
    }
    return 0;
}
