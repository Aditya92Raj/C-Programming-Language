//Operator in C language:-
//Ternary Operator (condition?exp1:exp2;)
#include <stdio.h>
int main() {
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    (x%2==0)?printf("even number"):printf("odd number");
    return 0;
}
