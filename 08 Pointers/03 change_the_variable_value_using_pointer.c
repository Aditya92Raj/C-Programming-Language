//Write a program to change a variable's value using a pointer.
#include <stdio.h>
int main() {
    int a=10;
    int *p=&a;
    *p=20;
    printf("Value of a=%d",a);
    return 0;
}
