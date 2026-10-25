//Write a program to find the square of a number using a pointer.
#include <stdio.h>
int main()
{
    int a,*p;
    printf("Enter a number:");
    scanf("%d",&a);
    p=&a;
    printf("square of %d = %d",*p,(*p)*(*p));
    return 0;
}
