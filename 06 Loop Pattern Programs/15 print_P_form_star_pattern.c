//Write a program to print P form star pattern in c language.
#include <stdio.h>
int main() {
    int a,i,j;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if((j==1 && i!=1)|| (i==1 && j!=1 && j!=a) || (j==a && i!=1 && i<a/2+1) || (i==a/2+1 && j!=a))
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
