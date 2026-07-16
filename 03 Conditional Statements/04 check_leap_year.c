// Write a program to input year from user and check whether year is leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a number:");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not leap year");
    }
    return 0;
}
