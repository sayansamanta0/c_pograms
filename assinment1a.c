#include <stdio.h>
//assinment 1
//math pass mark 50,if pass got 1500
//physics pass mark 60,if pass got 1500
//if pass in both got 4500
int main()
{
    int a, b;
start1:
    printf("enter your markes in math.....");
    scanf("%d", &a);
start2:
    printf("enter your mark in physics.....");
    scanf("%d", &b);

    if (a > 100 || a < 0)
    {
        printf("dont be too smart.Enter a valid mark in math.\n");
        goto start1;
    }

    else if (b < 0 || b > 100)
    {
        printf("dont be too smart.Enter a valid mark physics.\n");
        goto start2;
    }

    else
    {
        if (a >= 50 && b >= 60)
        {
            printf("you got Rs 4500 to pass in both exam.");
        }
        if (a < 50 && b >= 60)
        {
            printf("you got Rs 1500 for passing in physics.");
        }
        if (a >= 50 && b < 60)
        {
            printf("you got Rs 1500 for passing in math.");
        }
        if (a < 50 && b < 60)
        {
            printf("you got failed in both exam and you got no cash.");
        }
    }

    return 0;
}