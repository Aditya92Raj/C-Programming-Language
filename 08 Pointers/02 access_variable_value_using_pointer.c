//Write a program to access a variable's value using a pointer.
#include <stdio.h>
int main() {
    int a=20;
    int *p=&a;
    printf("Value of a=%d",*p);
    return 0;
}
