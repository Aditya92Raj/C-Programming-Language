//Operator in C language:-
//Ternary Operator (condition?exp1:exp2;)
#include <stdio.h>
int main() {
    int a,r;
    printf("Enter a three digit number:");
    scanf("%d",&a);
    r=a%10;
    a/=100;
    (a==r)?printf("palindrome number"):printf("not palindrome number");
    return 0;
}
