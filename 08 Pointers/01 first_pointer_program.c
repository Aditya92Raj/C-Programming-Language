//A Pointer is a variable that stores the memory address of another variable.
#include <stdio.h>
int main() {
    int a=10,*p=&a;
    printf("Value of a=%d",a);
    printf("\nAddress of a=%d",p);
    return 0;
}
//The memory address of a variable may change between program executions, but it is not guaranteed to change every time.
