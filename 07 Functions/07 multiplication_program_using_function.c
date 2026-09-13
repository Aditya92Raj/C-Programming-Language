//Write a program to create a function for multiplication of two numbers.
#include<stdio.h>
int add(int a,int b)
{
    return a*b;
}
int main()
{
    int a,b,result;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    result=add(a,b);
    printf("multiplication=%d",result);
    return 0;
}
