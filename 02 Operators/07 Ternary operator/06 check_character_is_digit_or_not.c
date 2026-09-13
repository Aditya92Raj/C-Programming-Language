//Operator in C language:-
//Ternary operator (condition?exp1:exp2;)
#include <stdio.h>
int main() {
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    (a>='0' && a<='9')?printf("digit"):printf("not a digit");
    return 0;
}
