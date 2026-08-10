//Write a program to print d form star pattern in C language.
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
            if(j==a || (i==a/2+1 && j!=1) || (i==a && j!=1) || (j==1 && i>a/2+1 && i<a))
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
