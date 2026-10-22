//Write a function to calculate the multiplication of the first n even numbers.
#include <stdio.h>
void num()
{
    int n,s=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
        {
            s*=i;
            i++;
        }
    printf("%d",s);
}
int main() {
    num();
    return 0;
}
