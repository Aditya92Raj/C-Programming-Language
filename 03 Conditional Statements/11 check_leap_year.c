//Write a program to input year from user and check whether given year is leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if (year%4==0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}
