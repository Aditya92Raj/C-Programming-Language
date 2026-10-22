//Write a function to calculate the multiplication of the first n natural numbers.
#include <stdio.h>
void num()
{
    int n,s=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            s*=i;
        }
    printf("%d",s);
}
int main() {
    num();
    return 0;
}
