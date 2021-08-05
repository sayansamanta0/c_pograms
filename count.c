#include <stdio.h>  
int main()  
{  
   int n;  
   int count=0;
   start: 
   printf("Enter a number");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     printf("\nThe number of digits in an integer is : %d",count);  
     goto start;
     getc;
    return 0;  
}