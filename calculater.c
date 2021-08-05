#include <stdio.h>
int main()
{

    int a, b,c;
start:

    printf("ente the first num: ");
    scanf("%d",&a);
    printf("\nente the second num: ");
    scanf("%d",&b);
start2:
    printf ("\nfor addition press 1\nfor subtrsaction press 2\nfor multiplication press 3\nfor divition press 4\n");
    scanf ("%d",&c);

    switch (c)
    {
    case 1:
        printf ("the addition is %d\n",a+b);
        break;
    case 2:
        printf ("the subtraction is %d\n",a-b);
        break;
    case 3:
        printf ("the multiplication is %d\n",a*b);
        break;
    case 4:
        printf ("the addition is %d\n",a/b);
        break;
    default:
        printf ("you enter wrong input");
        break;
        goto start2;
    }

   
    goto start;
  getc;
    return 0;
}