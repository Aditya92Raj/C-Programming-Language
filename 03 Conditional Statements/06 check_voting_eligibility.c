// Write a program to input age from user and check whether a person is eligible for vote.
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("Eligible for Voting.");
    }
    else
    {
        printf("Not Eligible for Voting.");
    }
    return 0;
}
