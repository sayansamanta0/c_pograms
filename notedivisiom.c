#include <stdio.h>
int main()
{
    int amt, a, b, c, d, e, f, g;
start:

    printf("enter the ammount\t");
    scanf("%d", &amt);
    printf("\n%d no of 100 note", a = amt / 100);
    printf("\n%d no of 50 note", (b = amt % 100) / 50);
    printf("\n%d no of 20 note", (c = b % 50) / 20);
    printf("\n%d no of 10 note", (d = c % 20) / 10);
    printf("\n%d no of 5 note", (e = d % 10) / 5);
    printf("\n%d no of 2 note", (f = e % 5) / 2);
    printf("\n%d no of 1 note\n", (g = f % 2) / 1);
    goto start;
    return 0;
}