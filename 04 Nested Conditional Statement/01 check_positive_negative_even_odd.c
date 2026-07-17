//Write a program to input number from user and check whether given number is positive even, positive odd, negative even, negative odd.
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a%2==0)
    {
        if (a>0)
        {
            printf("positive even");
        }
        else
        {
            printf("negative even");
        }
    }
    else
    {
        if (a>0)
        {
            printf("positive odd");
        }
        else
        {
            printf("negative odd");
        }
    }
    return 0;
}
