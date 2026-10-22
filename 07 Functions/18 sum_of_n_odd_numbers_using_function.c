//Write a function to calculate the sum of the first n odd numbers.
#include <stdio.h>
void num()
{
    int n,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
            s+=i;
            i++;
        }
    printf("%d",s);
}
int main() {
    num();
    return 0;
}
