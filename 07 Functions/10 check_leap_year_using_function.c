//Write a program to create a function for check year is leap year or not.
#include<stdio.h>
int add(int a)
{
    if (a%4==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
}
int main()
{
    int a;
    printf("Enter a year:");
    scanf("%d",&a);
    add(a);
    return 0;
}
