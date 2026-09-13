//Write a program to create a function for check number is even or odd.
#include<stdio.h>
int add(int a)
{
    if (a%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
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
