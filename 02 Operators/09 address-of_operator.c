//& is called the address-of operator when it is used with a variable. It gives the memory address of that variable.
#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n",a);
    printf("%d\n",&a);
    return 0;
}
