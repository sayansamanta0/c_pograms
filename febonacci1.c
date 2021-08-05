//fibonassi series

#include <stdio.h>
//recarsive function
int fib_recursive(int a)
{
    if (a == 1 || a == 2)
    {
        return a - 1;
    }
    else
    {
        return (fib_recursive(a - 1) + fib_recursive(a - 2));
    }
}
//itrative finction
int fib_itretive(int c)
{
    int a, b;
    a = 0;
    b = 1;
    for (int i = 0; i <= c - 2; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main()
{
    int n, i;

start:
    printf("\nenter the num ");
    scanf("%d", &n); //takinf the n th term input

    //calling recursive function
    printf("rc\t\t");
    for (int i = 1; i <= n; i++)
    {
         printf("%d\t", fib_recursive(i));
    }

    printf("\n\n");
    //calling itrative finctoion
    printf("ir\t\t");
    for (int i = 1; i <= n; i++)
    {

        printf("%d\t", fib_itretive(i));
    }
    goto start;
    getc;
    return 0;
}