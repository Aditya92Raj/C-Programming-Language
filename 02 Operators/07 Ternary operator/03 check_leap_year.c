//Operator in C language:-
//Ternary Operator (condition?exp1:exp2;)
#include <stdio.h>
int main() {
    int x;
    printf("Enter a year:");
    scanf("%d",&x);
    (x%4==0)?printf("leap year"):printf("not a leap year");
    return 0;
}
