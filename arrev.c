#include <stdio.h>

int arrr_rev(int arr[], int *ptr)
{
    int a, b;
    b = *ptr % 2;
    if (b == 0)
    {
        a = ((*ptr) / 2);
    }
    else
    {
        a = (((*ptr) + 1) / 2);
    }

    //swiping
    for (int i = 0; i <= a; i++)
    {
        int c;
        c = arr[i];
        arr[i] = arr[((*ptr)-1) - i];
        arr[((*ptr)-1) - i] = c;
    }
}
int main()
{
    int n;
    printf("enter how many element you want in arry :\t");
    scanf("%d", &n);
    int arr[n];
//taking input of the element
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element of array :\t", i + 1);
        scanf("%d", &arr[i]);
    }
//printing the array
    printf("before reversing the array is arr[%d]= { ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("}\n");
//caling te swaping function
    arrr_rev(arr, &n);

    printf("after reversing the array is arr[%d]= { ", n);
//printing the reverse array
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("}\n");
getc;
    return 0;
}