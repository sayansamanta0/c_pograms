#include <stdio.h>
int main()
{
    int num, r = 0, num2,sum=0;
    printf("enter the number\t");
    scanf("%d", &num);

    num2 = num;
    while (num2 != 0)
    {
        r = num2 % 10;
        num2 = num2 / 10;
       sum += r;
    }
    printf("sthe of the degit of %d =\t%d",num, sum);
    getc;
    return 0;
}