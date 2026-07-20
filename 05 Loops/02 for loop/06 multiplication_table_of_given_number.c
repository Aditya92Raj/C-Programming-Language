//write a program to input number from user and print multiplication table of given number using for loop in c language.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",i*a);
    }
    return 0;
}
