//Write a program to input number from user and check weather given number is two digit or not.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num>=10&& num<=99)
        printf("Two-digit number");
    else
        printf("Not a two-digit number");
    return 0;
}
