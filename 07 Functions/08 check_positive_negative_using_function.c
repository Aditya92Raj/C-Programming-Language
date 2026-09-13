//Write a program to create a function for check number is positive or not.
#include<stdio.h>
int add(int a)
{
    if (a>0)
    {
        printf("positive number");
    }
    else
    {
        printf("negative number");
    }
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    add(a);
    return 0;
}
