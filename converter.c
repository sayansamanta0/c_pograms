#include <stdio.h>

float t_input(float num)
{
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("\n");
    return num;
}

int main()
{
    float a, b, c, d, e, f, num;
    char ch;
converT:

    printf("\nSelect the conversion mode from the below list. (just give the input as the serial number)\n1. kms to miles.\n2. inches to foot.\n3. cms to inches.\n4. pound to kgs.\n5. inches to meters.\nYour input: ");
    scanf("%f", &a);
    if (a == 1)
    {
        b = t_input(num);
        printf("%f kms = %f miles", b, b * 0.621);
    }
    else if (a == 2)
    {
        c = t_input(num);
        printf("%f inches = %f foot", c, c * 0.0833);
    }
    else if (a == 3)
    {
        d = t_input(num);
        printf("%f cms = %f inches", d, d * 0.394);
    }
    else if (a == 4)
    {
        e = t_input(num);
        printf("%f pounds = %f kgs", e, e * 0.454);
    }
    else if (a == 5)
    {
        f = t_input(num);
        printf("%f inches = %f meters", f, f * 0.0254);
    }
    else
    {
        system("cls");
        printf("\n### Please enter number within 1 to 5 ###\n\n");
        goto converT;
    }

agaiN:
    printf("\n\nDo you want to run again?(Y or N): ");
    scanf("%s", &ch);
    if (ch == 'Y' || ch == 'y')
    {
        system("cls");
        goto converT;
    }
    else if (ch == 'N' || ch == 'n')
    {
        return 0;
    }
    else
    {
        printf("\n### Please enter Y or N ###");
        goto agaiN;
    }

    return 0;
}
