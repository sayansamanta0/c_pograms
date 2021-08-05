#include <stdio.h>

struct driver
{
    char name[50];
    char licence[50];
    char route[50];
    int km[50];
};

int main()
{
    int n;
    printf("here you can store all your docoment of drivers\n");
    printf("enter how many driver's you want to input\n");
    scanf("%d", &n);
    struct driver arr[n];

    for (int i = 1; i <= n; i++)
    {
        printf("enter %d no driver details\n", i);
        printf("enter %d driver name\t");
        scanf("\n");
        gets(arr[i - 1].name);
        printf("enter %d driver licence no\t", i);
        gets(arr[i - 1].licence);
        printf("enter %d driver route\t", i);
        gets(arr[i - 1].route);
        printf("enter %d driver kilomiter\t", i);
        scanf("%d", arr[i - 1].km);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d no drivers details\n", i);
        printf("Name - %s\n", arr[i - 1].name);
        printf(" licence no - %s\n", arr[i - 1].licence);
        printf("route - %s\n", arr[i - 1].route);
        printf("kilomite run - %d\n", arr[i - 1].km);
        printf("\n");
    }
 getc;
    return 0;
}