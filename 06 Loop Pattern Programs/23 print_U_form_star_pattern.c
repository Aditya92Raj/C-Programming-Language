//Write a program to print U form star pattern in C language.
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
            if((j==1 && i!=a) || (j==a && i!=a) || (i==a && j!=1 && j!=a))
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
