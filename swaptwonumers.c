#include<stdio.h>
int main() 
{
  double a, b, c;
  printf("Enter first number: ");
  scanf("%lf", &a);
  printf("Enter second number: ");
  scanf("%lf", &b);
  c = a;
  a = b;
  b = c;
  printf("\nAfter swapping, first number = %.2lf\n", a);
  printf("After swapping, second number = %.2lf", b);
  return 0;
}