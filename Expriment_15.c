/* Write a program to find the Fibonacci Series usisng the Recursion
*/

#include <stdio.h>
int fib (int);
int  main ()
{
    int num, f, i;
    printf ("Enter the Number of term you want to print:  ");
    scanf ("%d",&num);
    for ( i = 0; i < num; i++)
    {
         f= fib(i);
        printf ("%d  ", f);
    }
    return 0;
}
//Recursion Starts here
int fib (int n)
{
    if (n==0 || n==1)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }    
}
