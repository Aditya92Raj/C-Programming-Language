//A while loop checks the condition before executing the loop body. If the condition is false initially, the loop body will not execute even once.
#include <stdio.h>
int main()
{
    int i=1;
    while (i<=10)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
