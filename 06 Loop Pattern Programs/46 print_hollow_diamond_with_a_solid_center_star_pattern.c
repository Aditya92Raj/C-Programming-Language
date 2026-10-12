//Write a program to print hollow diamond with a solid center in C language.
#include <stdio.h>
int main() {
    int a,i,j;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(j==a+a/2+1-i || j+a/2==i || i+j==a/2+2 || i+a/2==j || (j==a/2+1 && i>a/4+1 && i<3*a/4+1))
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
