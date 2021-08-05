#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findgcd(int arr[], int num)
{
    int result = arr[0];

    for (int i = 1; i < num; ++i)
    {
        result = gcd(result, arr[i]);
        if (result == 1)
        {
            return 1;
        }
        return result;
    }
}

int main()
{
    int num, min, gcd;
start:
input:
    printf("\n\nhow many numbers of G.C.D you want\t");
    scanf("%d", &num);
    int arr[num];
    //takinf nummbers as input
    for (int i = 0; i < num; i++)
    {
        printf("enter %d no number\t", i + 1);
        scanf("%d", &arr[i]);
    }

    //conforming from user
input2:
    printf("these are the numbers you enterd\t");
    for (int i = 0; i < num; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    printf("\ndo you want to reenter the nums.\nif you want to reenter press 'y'\nif you dont press 'n'\t");
    //if user want to re enter
    char conferm;
    getchar();
    scanf(" %c", &conferm);

    if (conferm == 'y')
    {
        goto input;
    }
    //if user dont want to re enter
    if (conferm == 'n')
    {

        gcd = findgcd(arr, num);
        
        printf("\n\nthe G.C.D is %d \n\n", gcd);
    }
    //if user give a wrong input
    else
    {
        printf("\n** you enter a wrong input **\nenter again\n\n");
        goto input2;
    }
//asking user want to recalculate
cheak:
    printf("\n### do you want to calculate agian. ####\nif you want to recalculate enter 'y'\nif you don't want to recaalculate enter 'n'\t");
    char reenter;
    getchar();
    scanf(" %c", &reenter);
    if (reenter == 'y')
    {
        goto start;
    }
    if (reenter == 'n')
    {
        printf("\n#### THANKU ####");
    }
    else
    {
        printf("\n\n*#*#  you enter a wrong input.plse re enter  #*#*\n\n");
        goto cheak;
    }

    gets;
    return 0;
}