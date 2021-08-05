#include <stdio.h>
int main()
{
    int row;
    printf("enter how many rows you want\t");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= (row - i); j++)
            printf(" ");

        for (int k = 1; k <= i; k++)
            printf("%d ", i);
        printf("\n");
    }

    return 0;
}