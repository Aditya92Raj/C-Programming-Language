// Write a program to input number from user and check number is even or odd according to their marks.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    return 0;
}
