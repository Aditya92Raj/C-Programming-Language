// Write a program to input marks from user and print grade according to their marks.
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks (0-100):");
    scanf("%d",&marks);
    if (marks<0 || marks>100)
    {
        printf("Invalid Marks");
    }
    else if (marks >= 90)
    {
        printf("Grade:A+");
    }
    else if (marks>=80)
    {
        printf("Grade:A");
    }
    else if (marks>=70)
    {
        printf("Grade:B");
    }
    else if (marks>=60)
    {
        printf("Grade:C");
    }
    else if (marks>=50)
    {
        printf("Grade:D");
    }
    else if (marks >= 33)
    {
        printf("Grade:E");
    }
    else
    {
        printf("Grade:F (Fail)");
    }
    return 0;
}
