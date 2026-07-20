//A do...while loop executes the loop body at least once, because the condition is checked after execution.
#include <stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=10);
    return 0;
}
