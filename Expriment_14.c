/* 
Write a program for Factorial Using Recursion.
*/
#include <stdio.h>
int fact (int);
int main()
{
    int num, factorial;
    printf ("Enter the number to find the Factorial: ");
    scanf ("%d",&num);
    factorial= fact(num);
    printf ("\n The Factorial of the number is: %d ", factorial);
    return 0;
}

// Recursion Starts Here
int  fact (int x)
{
  if (x==0)
  {
      return 1;
  }
  else
  {
      return x*fact(x-1);
  }
  
}