//write a program to print a square number pattern in c language.
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
