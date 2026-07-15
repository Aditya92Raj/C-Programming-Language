//Operator in C language:-
//Arithmetic Operator(+,-,*,/,%)
#include <stdio.h>
int main() {
    int a=9,b=3,Sum,difference,multiply;
    Sum=a+b;
    difference=a-b;
    multiply=a*b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("Sum=%d\n",Sum);
    printf("difference=%d\n",difference);
    printf("multiply=%d\n",multiply);
    return 0;
}
//power is special case in c language not use '**' like python.
//math.h library is used for power function.
