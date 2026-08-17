//Function with arguments and return value.
#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int result;
    result=add(10,20);
    printf("Sum=%d",result);
    return 0;
}
