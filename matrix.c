#include <stdio.h>
int main()
{
    int r1, c1, r2 , c2 , sum = 0;
    printf("youn can multiply two matrixs\n");
    //taking input of the number of row and colum of first matrix
    printf("\nthe num of rows of the first matrix ");
    scanf("%d", &r1);
    printf("the num of colums of the first matrix ");
    scanf("%d", &c1);
    int a[r1][c1];
    //input of first marix element
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("enter (%d,%d) eliment of second marix\t", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
//taking input of the number of row and colum of second matrix
start:
    printf("\nthe num of rows of the second matrix ");
    scanf("%d", &r2);
    printf("the num of colums of the second matrix ");
    scanf("%d", &c2);
    int b[r2][c2];
    //cheaking if multiplication is possible
    if (c1 != r2)
    {
        printf("\n** matrix multiplication is not possible **\n");
        printf("** as firstr matrix's colum number and second matrix's row number in not same **\n\n");
        goto start;
    }

    int c[r1][c2];
    //intialling third matrixs element with 0
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }

    //input of second marix element
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("enter (%d,%d) eliment of second marix \t", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    //printing first matrix
    printf("\n\nthe first matrix is\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    //printing second matrix
    printf("\n\nthe second matrix is\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    //multiplying the marixs
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }
    //printing matrix multiplication result
    printf("\n\nthe result  matrix is\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t ", c[i][j]);
        }
        printf("\n");
    }
getc;
    return 0;
}