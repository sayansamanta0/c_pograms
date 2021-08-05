#include <stdio.h>
int main ()
{
   int a,max=0;
   start:
   printf("enter the number");
   scanf("%d",&a);

   int arr[a];

   for (int i = 0; i < a; i++)
   {
     printf("enter %d element\t",i+1);
     scanf("%d",&arr[i]);
     //continue;
   }

   for (int i = 0; i < a; i++)
   {
      if (arr[i]>= max)
      {
         max=arr[i];
      }
      
   }
   
    printf("%d",max);
    goto start;
    getc;
return 0;
}