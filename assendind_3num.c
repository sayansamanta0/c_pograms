#include <stdio.h>
int main()
{
    int a, b, c;
start:

    printf("\nenter your first number :");
    scanf("%d", &a);
    printf("enter your second number :");
    scanf("%d", &b);
    printf("enter your third number :");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("%d>%d>%d", a, b, c);
        }
        if (c > b)
        {
            printf("%d>%d>%d", a, c, b);
        }
    }
    if (b > a && b > c)
    {
        if (a > c)
        {
            printf("%d>%d>%d", b, a, c);
        }
        if (c > a)
        {
            printf("%d>%d>%d", b, c, a);
        }
    }
    if (c > a && c > b)
    {
        if (a > b)
        {
            printf("%d>%d>%d", c, a, b);
        }
        if (b > a)
        {
            printf("%d>%d>%d", c, b, a);
        }
    }
    goto start;
 getc;
    return 0;
}