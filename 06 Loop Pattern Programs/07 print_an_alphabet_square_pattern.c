//write a program to print an alphabet square pattern in c language.
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int j=65;j<a+65;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
