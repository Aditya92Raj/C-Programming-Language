//Write a function to calculate the factorial of a number.
#include <stdio.h>
void num()
{
    int a,s=1;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
        {
            s*=i;
        }
    printf("%d",s);
}
int main() {
    num();
    return 0;
}
