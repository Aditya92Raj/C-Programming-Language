//Basic input & output program.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    printf("before swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
