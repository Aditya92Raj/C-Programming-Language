//write a program to print a Right angle triangle number pattern in c language.
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
