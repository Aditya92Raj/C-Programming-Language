//Write a program to input number from user and swapp to number with the help of third variable.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    printf("before swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    c=a;
    a=b;
    b=c;
    printf("after swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
