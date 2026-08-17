//Function with arguments but no any return value.
#include <stdio.h>
void add(int a, int b)
{
    int sum=a+b;
    printf("Sum=%d",sum);
}
int main()
{
    add(10,20);
    return 0;
}
