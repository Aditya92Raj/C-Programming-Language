//Write a program to print ↑ form star pattern in C language.
#include <stdio.h>
int main() {
    int a,i,j;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(j==a/2+1 || j==a/2+2-i || i+a/2==j)
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
