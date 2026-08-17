//Function with no arguments but return value.
#include <stdio.h>
int getNumber()
{
    return 10;
}
int main()
{
    int n;
    n = getNumber();
    printf("Number = %d", n);
    return 0;
}
