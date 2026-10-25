//Write a program to input and display an integer using a pointer.
#include <stdio.h>
int main()
{
    int a,*p;
    printf("Enter a number:");
    scanf("%d",&a);
    p=&a;
    printf("Value of a = %d",*p);
    return 0;
}
