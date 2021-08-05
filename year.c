#include <stdio.h>

int main()
{
    int year;
    start:
    printf("\nEnter the year which you want to check if leap year or not: ");
    scanf("%d", &year);
    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
    {
        printf("\n%d is a leap year", year);
    }
    else
    {
        printf("\n%d is not a leap year", year);
    }
    goto start;
    getc;
    return 0;
}