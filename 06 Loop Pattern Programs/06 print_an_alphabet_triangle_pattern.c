//write a program to print an alphabet triangle pattern in c language.
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=65;i<a+65;i++)
    {
        for(int j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
