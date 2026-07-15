//Operator in C language:-
//Logical Operator(&&,||,!)
#include <stdio.h>
int main() {
    int a=5,b=22;
    printf("%d\n",a>=b || a<=b);
    printf("%d\n",a<=b && a==b);
    printf("%d\n",!(a<b) || a>=b);
    printf("%d\n",!(a>b));
    return 0;
}
//Combines two or more conditions is called logical situation.
//If condition is true output will 1 and if condition is false output will 0.
