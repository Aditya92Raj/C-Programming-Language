//Write a program to print C form star pattern in C language.
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
            if((j==1 && i!=1 && i!=a) || (i==1 && j!=1 && j!=a) || (i==a && j!=1 && j!=a) || (i>1 && i<=a/4+1 && j==a) || (i>=3*a/4+1 && i<a && j==a))
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
