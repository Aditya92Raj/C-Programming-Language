//Write a function to calculate the sum of the first n even numbers.
#include <stdio.h>
void num()
{
    int n,s=0,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)
        {
            k=i*2;
            s+=k;
        }
    printf("%d",s);
}
int main() {
    num();
    return 0;
}
