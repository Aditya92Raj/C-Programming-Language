//Write a program to swap two numbers using pointers.
#include <stdio.h>
int main()
{
    int a,b,temp,*p,*q;
    printf("Enter your two numbes:");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("Before Swapping:-");
    printf("\na=%d\nb=%d",*p,*q);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\nAfter Swapping:-");
    printf("\na=%d\nb=%d",*p,*q);
    return 0;
}
