// Write a program to input number from user and check number is positive,negative or zero according to their marks.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a<0)
    {
        printf("negative number");
    }
    else if (a>0)
    {
        printf("positive number");
    }
    else
    {
        printf("zero");
    }
    return 0;
}
