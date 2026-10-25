//Write a program to add two numbers using pointers.
#include <stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("Enter your two numbers:");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("Addition = %d",*p+*q);
    return 0;
}
