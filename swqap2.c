#include <stdio.h>
int main()
{
  int a, b, c;
  start:
  printf("Enter first number : ");
  scanf("%d", &a);
  printf("Enter second number : ");
  scanf("%d", &b);

  a = a - b;
  b = a + b;
  a = b - a;
  printf("after swaping the first number is: %d\n", a);
  printf("after swaping the second number is: %d\n\n", b);

   goto start;
   getc;
  return 0;
}