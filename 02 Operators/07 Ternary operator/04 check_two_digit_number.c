//Operator in C language:-
//Ternary Operator (condition?exp1:exp2;)
#include <stdio.h>
int main() {
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    (x>9 && x<100)?printf("two digit number"):printf("not a two digit number");
    return 0;
}
