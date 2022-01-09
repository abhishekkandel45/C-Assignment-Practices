// Write a C program to find the Sum of Natural Number from 1 to n using for loop
#include <stdio.h>
int main()
{
int n, sum=0, i;
 printf ("Enter the Number to find Sum of natural Number:  ");
 scanf ("%d",&n);
 for (i = 1; i <=n; i++)
 {
     sum=sum+i;
 }
 printf ("\n The sum of natural number from 1 to %d is %d",n,sum);
 return 0;
}d