//write a program to print a square star pattern in c language.
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
