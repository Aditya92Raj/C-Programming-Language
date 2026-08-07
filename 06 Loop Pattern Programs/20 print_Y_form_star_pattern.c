//Write a program to print Y form star pattern in C language.
#include <stdio.h>
int main()
{
    int a,i,j;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if((i<=a/2+1 && i==j) ||
               (i<=a/2+1 && i+j==a+1) ||
               (i>a/2+1 && j==a/2+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
