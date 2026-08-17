//Addition program using function.
#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b, result;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    result = add(a, b);
    printf("Sum = %d", result);
    return 0;
}
