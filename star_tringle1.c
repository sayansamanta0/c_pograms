//C program to print equilateral triangle or pyramid star pattern

#include <stdio.h>
int main()
{
    int a;
    printf("enter the number of rows you want\t");
    scanf("%d", &a);//taking input of rows

    for (int i = 1; i <= a; i++) //integer through rows
    {
         for (int k =1 ; k <=a-i ; k++) //printing leading spaces
           printf(" ");
         for (int  j = 0; j <(i+(i-1)) ; j++) //printing stars
            printf("*");
         printf("\n"); //printing nest line
    }

    return 0;
}