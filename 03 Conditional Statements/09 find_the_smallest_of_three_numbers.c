// Write a program to input three number from user find the smallest of three numbers.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if (a<=b && a<=c)
    {
        printf("%d is the smallest.", a);
    }
    else if (b<=a && b<=c)
    {
        printf("%d is the smallest.", b);
    }
    else
    {
        printf("%d is the smallest.", c);
    }
    return 0;
}
