#include <stdio.h>
int pallindrom(int num)
{
    int a=0,r,b;
    b=num;
    while (b!=0)
    {
    //reverceing the number 
    r=b%10;     //geting the remainder fron number 
    b=b/10;     //substracting the remainder
    a=(a*10)+r; //creatinr reverse num
    }
    //cheaking palindrom or not
    printf("%d\n",a);
    if (a==num)
    printf("the number %d is pallindrom\n",num);
    else
        printf("the number %d is not a pallindrom\n",num);
    

}
int main ()
{
    int num;
    start:
    printf("enter the number\t");
    scanf("%d",&num);
    pallindrom(num);
    goto start;
    getc;
return 0;
}