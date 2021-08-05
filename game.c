#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    int a, n, m, p1 , p2 ;
    char x;
    char name [20];
    printf("enter your name ");
    gets(name);
    start1:
    p1=0,p2=0;
    printf("\nwelcome to the game %s \n",name);
    printf("enter how many times you want to repit the game ");
    scanf("%d", &a);
    
    for (int i = 0; i < a; i++)
    {
    start:
    printf("\n%s its your %d no turn\n",name,i+1);
    printf("***\nenter 0 for rock\nenter 1 for paper\nenter 2 for seissor\n***\n");
        scanf("%d", &n);
        if (n >= 3)
        {
            printf("\n\n### enter a valid input ###\n\n");
            goto start;
        }

        switch (n)
        {
        case 0:
            printf("you choose rock\n");
            break;
        case 1:
            printf("you choose paper\n");
            break;
        case 2:
            printf("you choose seissor\n");
            break;
        default:
            break;
        }

        m = generateRandomNumber(3);
        printf ("\nits computer's %d no turn\n ",i+1);
        switch (m)
        {
        case 0:
            printf("computer choose rock\n");
            break;
        case 1:
            printf("computer choose paper\n");
            break;
        case 2:
            printf("computer choose seissor\n");
            break;
        default:
            break;
        }
        printf("\n\n");

        if (n == m)
        {
            p1 = p1 + 0;
            p2 = p2 + 0;
        }
        if ((n == 0) && (m = 1))
        {
            p1 = p1 + 0;
            p2 = p2 + 1;
        }
        else if ((n == 1) && (m == 2))
        {
            p1 = p1 + 0;
            p2 = p2 + 1;
        }
        else if ((n = 2) && (m = 0))
        {
            p1 = p1 + 0;
            p2 = p2 + 1;
        }

        else
        {
            p1 = p1 + 1;
            p2 = p2 + 0;
        }
    }
    printf("*** score ***\n%s your score = %d\ncomputer's score = %d\n\n", name,p1, p2);
    if (p1 > p2)
    {
        printf("** congratulation %s ** \n you own the game \n#######\n\n",name);
    }
    else
    {
        printf("## you loose! ##\n#######\n\n");
    }
printf("*** do you want to play again ***\nif you want to play, press y\nif you dont want to play, press n\n ");
scanf("%s",&x);
if (x=='y')
{
    goto start1;
}
else
{
    printf("*#*# thank you for playing *#*#");
}


   getc;
    return 0;
    
}