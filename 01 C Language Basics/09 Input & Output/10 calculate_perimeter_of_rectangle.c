//Write a program to input length and breadth of rectangle and calculate perimeter of rectangle.
#include <stdio.h>
int main() {
    int l,b;
    printf("Enter a length of rectangle:");
    scanf("%d",&l);
    printf("Enter a breadth of rectangle:");
    scanf("%d",&b);
    printf("Perimeter of rectangle=%d",2*(l+b));
    return 0;
}
