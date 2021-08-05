#include <stdio.h>
//assinment 1
//math pass mark 50,if pass got 1500
//science pass mark 60,if pass got 1500
//if pass in both got 4500

int main()
{
int a,b;
printf ("enter your markes in math.....");
scanf ("%d",&a);

printf ("enter your mark in science.....");
scanf ("%d",&b);

if (a,b>100 || a,b<0)
{
    printf ("dont be too smart.Enter a valid mark.\n");
}

else
{
if (a>=50 && b>=60)
    {
    printf ("you got Rs 4500 to pass in both exam.");
    }
if (a<50 && b>=60)
{
    printf ("you got Rs 1500 for passing in science.");
}
if (a>=50 && b<60)
{
    printf("you got Rs 1500 for passing in math.");
}
if (a<50 && b<60)
{
    printf ("you got failed in both exam and you got no cash.");
}
}
return 0;
}