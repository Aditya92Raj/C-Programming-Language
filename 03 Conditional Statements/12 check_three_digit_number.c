//Write a program to input number from user and check weather given number is three digit or not.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num>=100&& num<=999)
        printf("Three-digit number");
    else
        printf("Not a three-digit number");
    return 0;
}
