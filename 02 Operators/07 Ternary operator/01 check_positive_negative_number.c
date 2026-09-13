//Operator in C language:-
//Ternary Operator (condition?exp1:exp2;)
#include <stdio.h>
int main() {
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    (x>=0)?printf("positive number"):printf("negative number");
    return 0;
}
//Ternari operator is a conditional operator used as a short form of if & else.
