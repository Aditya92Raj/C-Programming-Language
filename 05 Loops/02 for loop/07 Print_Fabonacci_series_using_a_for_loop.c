//Write a program to printf fabonacci Series using a for loop in C language.
#include <stdio.h>
int main()
{
    int r,a=-1,b=1,c;
    printf("Enter a range:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
        {
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    return 0;
}
