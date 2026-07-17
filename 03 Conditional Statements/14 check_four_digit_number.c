//Write a program to input number from user and check weather given number is four digit or not.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num>=1000&& num<=9999)
        printf("Four-digit number");
    else
        printf("Not a four-digit number");
    return 0;
}
