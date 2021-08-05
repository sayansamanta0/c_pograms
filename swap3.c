#include <stdio.h>
int main()
{
    int a, b,c;
start:

    printf("enter your first number :");
    scanf("%d", &a);

    printf("enter your second number :");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("after swaping the first number is: %d\n", a);
    printf("after swaping the second number is: %d\n\n", b);

    goto start;
    getc;
    return 0;
}